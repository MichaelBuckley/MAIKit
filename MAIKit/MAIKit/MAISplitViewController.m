#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

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

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UISplitViewController*) self init];
#else
    return (id) [(NSSplitViewController*) self init];
#endif
#pragma clang diagnostic pop
}

-(instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UISplitViewController*) self initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
#else
    return (id) [(NSSplitViewController*) self initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
#endif
#pragma clang diagnostic pop
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
