#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

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
