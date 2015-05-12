#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAIPanGestureRecognizer.h"

@implementation MAIPanGestureRecognizer

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIPanGestureRecognizer class];
#else
    return [NSPanGestureRecognizer class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIPanGestureRecognizer*) [UIPanGestureRecognizer alloc];
#else
    return (MAIPanGestureRecognizer*) [NSPanGestureRecognizer alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIPanGestureRecognizer*) self init];
#else
    return (id) [(NSPanGestureRecognizer*) self init];
#endif
#pragma clang diagnostic pop
}

-(instancetype)initWithTarget:(id)target action:(SEL)action{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIPanGestureRecognizer*) self initWithTarget:target action:action];
#else
    return (id) [(NSPanGestureRecognizer*) self initWithTarget:target action:action];
#endif
#pragma clang diagnostic pop
}
#if TARGET_OS_IPHONE
-(UIPanGestureRecognizer*) ios
{
    return (UIPanGestureRecognizer*) self;
}
#else
-(NSPanGestureRecognizer*) mac
{
    return (NSPanGestureRecognizer*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIPanGestureRecognizer (MAIConversion)
#else
@implementation NSPanGestureRecognizer (MAIConversion)
#endif
-(MAIPanGestureRecognizer*) mai
{
    return (MAIPanGestureRecognizer*) self;
}
@end

#pragma clang diagnostic pop
