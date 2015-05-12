#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAIShadow.h"

@implementation MAIShadow

+(Class) class
{
#if TARGET_OS_IPHONE
    return [NSShadow class];
#else
    return [NSShadow class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIShadow*) [NSShadow alloc];
#else
    return (MAIShadow*) [NSShadow alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(NSShadow*) self init];
#else
    return (id) [(NSShadow*) self init];
#endif
#pragma clang diagnostic pop
}


#if TARGET_OS_IPHONE
-(NSShadow*) ios
{
    return (NSShadow*) self;
}
#else
-(NSShadow*) mac
{
    return (NSShadow*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation NSShadow (MAIConversion)
#else
@implementation NSShadow (MAIConversion)
#endif
-(MAIShadow*) mai
{
    return (MAIShadow*) self;
}
@end

#pragma clang diagnostic pop
