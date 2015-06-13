#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAINib.h"

@implementation MAINib

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UINib class];
#else
    return [NSNib class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAINib*) [UINib alloc];
#else
    return (MAINib*) [NSNib alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UINib*) ios
{
    return (UINib*) self;
}
#else
-(NSNib*) mac
{
    return (NSNib*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UINib (MAIConversion)
#else
@implementation NSNib (MAIConversion)
#endif
-(MAINib*) mai
{
    return (MAINib*) self;
}
@end

#pragma clang diagnostic pop
