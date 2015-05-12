#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

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

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIGestureRecognizer*) self init];
#else
    return (id) [(NSGestureRecognizer*) self init];
#endif
#pragma clang diagnostic pop
}

-(instancetype)initWithTarget:(id)target action:(SEL)action{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIGestureRecognizer*) self initWithTarget:target action:action];
#else
    return (id) [(NSGestureRecognizer*) self initWithTarget:target action:action];
#endif
#pragma clang diagnostic pop
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
