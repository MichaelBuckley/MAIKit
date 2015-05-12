#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAIAccessibilityElement.h"

@implementation MAIAccessibilityElement

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIAccessibilityElement class];
#else
    return [NSAccessibilityElement class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIAccessibilityElement*) [UIAccessibilityElement alloc];
#else
    return (MAIAccessibilityElement*) [NSAccessibilityElement alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIAccessibilityElement*) self init];
#else
    return (id) [(NSAccessibilityElement*) self init];
#endif
#pragma clang diagnostic pop
}


#if TARGET_OS_IPHONE
-(UIAccessibilityElement*) ios
{
    return (UIAccessibilityElement*) self;
}
#else
-(NSAccessibilityElement*) mac
{
    return (NSAccessibilityElement*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIAccessibilityElement (MAIConversion)
#else
@implementation NSAccessibilityElement (MAIConversion)
#endif
-(MAIAccessibilityElement*) mai
{
    return (MAIAccessibilityElement*) self;
}
@end

#pragma clang diagnostic pop
