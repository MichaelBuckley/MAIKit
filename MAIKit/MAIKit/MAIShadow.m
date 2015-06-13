#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

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
