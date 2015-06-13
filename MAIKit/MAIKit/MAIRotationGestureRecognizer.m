#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIRotationGestureRecognizer.h"

@implementation MAIRotationGestureRecognizer

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIRotationGestureRecognizer class];
#else
    return [NSRotationGestureRecognizer class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIRotationGestureRecognizer*) [UIRotationGestureRecognizer alloc];
#else
    return (MAIRotationGestureRecognizer*) [NSRotationGestureRecognizer alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIRotationGestureRecognizer*) ios
{
    return (UIRotationGestureRecognizer*) self;
}
#else
-(NSRotationGestureRecognizer*) mac
{
    return (NSRotationGestureRecognizer*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIRotationGestureRecognizer (MAIConversion)
#else
@implementation NSRotationGestureRecognizer (MAIConversion)
#endif
-(MAIRotationGestureRecognizer*) mai
{
    return (MAIRotationGestureRecognizer*) self;
}
@end

#pragma clang diagnostic pop
