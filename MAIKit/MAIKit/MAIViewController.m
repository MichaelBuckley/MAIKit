#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIViewController.h"

@implementation MAIViewController

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIViewController class];
#else
    return [NSViewController class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIViewController*) [UIViewController alloc];
#else
    return (MAIViewController*) [NSViewController alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIViewController*) ios
{
    return (UIViewController*) self;
}
#else
-(NSViewController*) mac
{
    return (NSViewController*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIViewController (MAIConversion)
#else
@implementation NSViewController (MAIConversion)
#endif
-(MAIViewController*) mai
{
    return (MAIViewController*) self;
}
@end

#pragma clang diagnostic pop
