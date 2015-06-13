#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAISegmentedControl.h"

@implementation MAISegmentedControl

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UISegmentedControl class];
#else
    return [NSSegmentedControl class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAISegmentedControl*) [UISegmentedControl alloc];
#else
    return (MAISegmentedControl*) [NSSegmentedControl alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UISegmentedControl*) ios
{
    return (UISegmentedControl*) self;
}
#else
-(NSSegmentedControl*) mac
{
    return (NSSegmentedControl*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UISegmentedControl (MAIConversion)
#else
@implementation NSSegmentedControl (MAIConversion)
#endif
-(MAISegmentedControl*) mai
{
    return (MAISegmentedControl*) self;
}
@end

#pragma clang diagnostic pop
