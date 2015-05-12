#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

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

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UINib*) self init];
#else
    return (id) [(NSNib*) self init];
#endif
#pragma clang diagnostic pop
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
