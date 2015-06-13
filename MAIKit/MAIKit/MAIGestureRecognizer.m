#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIGestureRecognizer.h"

@implementation MAIGestureRecognizer

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIGestureRecognizer class];
#else
    return [NSGestureRecognizer class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIGestureRecognizer*) [UIGestureRecognizer alloc];
#else
    return (MAIGestureRecognizer*) [NSGestureRecognizer alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIGestureRecognizer*) ios
{
    return (UIGestureRecognizer*) self;
}
#else
-(NSGestureRecognizer*) mac
{
    return (NSGestureRecognizer*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIGestureRecognizer (MAIConversion)
#else
@implementation NSGestureRecognizer (MAIConversion)
#endif
-(MAIGestureRecognizer*) mai
{
    return (MAIGestureRecognizer*) self;
}
@end

#pragma clang diagnostic pop
