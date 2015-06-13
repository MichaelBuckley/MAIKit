#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIView.h"

@implementation MAIView

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIView class];
#else
    return [NSView class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIView*) [UIView alloc];
#else
    return (MAIView*) [NSView alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIView*) ios
{
    return (UIView*) self;
}
#else
-(NSView*) mac
{
    return (NSView*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIView (MAIConversion)
#else
@implementation NSView (MAIConversion)
#endif
-(MAIView*) mai
{
    return (MAIView*) self;
}
@end

#pragma clang diagnostic pop
