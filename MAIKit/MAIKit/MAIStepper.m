#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAIStepper.h"

@implementation MAIStepper

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIStepper class];
#else
    return [NSStepper class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIStepper*) [UIStepper alloc];
#else
    return (MAIStepper*) [NSStepper alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIStepper*) self init];
#else
    return (id) [(NSStepper*) self init];
#endif
#pragma clang diagnostic pop
}

-(instancetype)initWithFrame:(CGRect)frame{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIStepper*) self initWithFrame:frame];
#else
    return (id) [(NSStepper*) self initWithFrame:frame];
#endif
#pragma clang diagnostic pop
}
#if TARGET_OS_IPHONE
-(UIStepper*) ios
{
    return (UIStepper*) self;
}
#else
-(NSStepper*) mac
{
    return (NSStepper*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIStepper (MAIConversion)
#else
@implementation NSStepper (MAIConversion)
#endif
-(MAIStepper*) mai
{
    return (MAIStepper*) self;
}
@end

#pragma clang diagnostic pop
