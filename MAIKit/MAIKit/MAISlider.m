#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAISlider.h"

@implementation MAISlider

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UISlider class];
#else
    return [NSSlider class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAISlider*) [UISlider alloc];
#else
    return (MAISlider*) [NSSlider alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UISlider*) self init];
#else
    return (id) [(NSSlider*) self init];
#endif
#pragma clang diagnostic pop
}

-(instancetype)initWithFrame:(CGRect)frame{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UISlider*) self initWithFrame:frame];
#else
    return (id) [(NSSlider*) self initWithFrame:frame];
#endif
#pragma clang diagnostic pop
}
#if TARGET_OS_IPHONE
-(UISlider*) ios
{
    return (UISlider*) self;
}
#else
-(NSSlider*) mac
{
    return (NSSlider*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UISlider (MAIConversion)
#else
@implementation NSSlider (MAIConversion)
#endif
-(MAISlider*) mai
{
    return (MAISlider*) self;
}
@end

#pragma clang diagnostic pop
