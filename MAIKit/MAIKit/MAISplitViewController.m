#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAISplitViewController.h"

@implementation MAISplitViewController

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UISplitViewController class];
#else
    return [NSSplitViewController class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAISplitViewController*) [UISplitViewController alloc];
#else
    return (MAISplitViewController*) [NSSplitViewController alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UISplitViewController*) ios
{
    return (UISplitViewController*) self;
}
#else
-(NSSplitViewController*) mac
{
    return (NSSplitViewController*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UISplitViewController (MAIConversion)
#else
@implementation NSSplitViewController (MAIConversion)
#endif
-(MAISplitViewController*) mai
{
    return (MAISplitViewController*) self;
}
@end

#pragma clang diagnostic pop
