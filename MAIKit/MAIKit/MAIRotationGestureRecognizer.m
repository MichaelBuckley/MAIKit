#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

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

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIRotationGestureRecognizer*) self init];
#else
    return (id) [(NSRotationGestureRecognizer*) self init];
#endif
#pragma clang diagnostic pop
}

-(instancetype)initWithTarget:(id)target action:(SEL)action{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIRotationGestureRecognizer*) self initWithTarget:target action:action];
#else
    return (id) [(NSRotationGestureRecognizer*) self initWithTarget:target action:action];
#endif
#pragma clang diagnostic pop
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
