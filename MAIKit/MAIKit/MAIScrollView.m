#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIScrollView.h"

@implementation MAIScrollView

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIScrollView class];
#else
    return [NSScrollView class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIScrollView*) [UIScrollView alloc];
#else
    return (MAIScrollView*) [NSScrollView alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIScrollView*) ios
{
    return (UIScrollView*) self;
}
#else
-(NSScrollView*) mac
{
    return (NSScrollView*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIScrollView (MAIConversion)
#else
@implementation NSScrollView (MAIConversion)
#endif
-(MAIScrollView*) mai
{
    return (MAIScrollView*) self;
}
@end

#pragma clang diagnostic pop
