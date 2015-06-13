#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIVisualEffectView.h"

@implementation MAIVisualEffectView

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIVisualEffectView class];
#else
    return [NSVisualEffectView class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIVisualEffectView*) [UIVisualEffectView alloc];
#else
    return (MAIVisualEffectView*) [NSVisualEffectView alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIVisualEffectView*) ios
{
    return (UIVisualEffectView*) self;
}
#else
-(NSVisualEffectView*) mac
{
    return (NSVisualEffectView*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIVisualEffectView (MAIConversion)
#else
@implementation NSVisualEffectView (MAIConversion)
#endif
-(MAIVisualEffectView*) mai
{
    return (MAIVisualEffectView*) self;
}
@end

#pragma clang diagnostic pop
