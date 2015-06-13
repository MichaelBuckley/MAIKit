#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

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
