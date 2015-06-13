#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIDatePicker.h"

@implementation MAIDatePicker

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIDatePicker class];
#else
    return [NSDatePicker class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIDatePicker*) [UIDatePicker alloc];
#else
    return (MAIDatePicker*) [NSDatePicker alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIDatePicker*) ios
{
    return (UIDatePicker*) self;
}
#else
-(NSDatePicker*) mac
{
    return (NSDatePicker*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIDatePicker (MAIConversion)
#else
@implementation NSDatePicker (MAIConversion)
#endif
-(MAIDatePicker*) mai
{
    return (MAIDatePicker*) self;
}
@end

#pragma clang diagnostic pop
