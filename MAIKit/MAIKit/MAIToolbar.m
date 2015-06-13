#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIToolbar.h"

@implementation MAIToolbar

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIToolbar class];
#else
    return [NSToolbar class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIToolbar*) [UIToolbar alloc];
#else
    return (MAIToolbar*) [NSToolbar alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIToolbar*) ios
{
    return (UIToolbar*) self;
}
#else
-(NSToolbar*) mac
{
    return (NSToolbar*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIToolbar (MAIConversion)
#else
@implementation NSToolbar (MAIConversion)
#endif
-(MAIToolbar*) mai
{
    return (MAIToolbar*) self;
}
@end

#pragma clang diagnostic pop
