#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAILayoutDimension.h"

@implementation MAILayoutDimension

+(Class) class
{
#if TARGET_OS_IPHONE
    return [NSLayoutDimension class];
#else
    return [NSLayoutDimension class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAILayoutDimension*) [NSLayoutDimension alloc];
#else
    return (MAILayoutDimension*) [NSLayoutDimension alloc];
#endif
}

#if TARGET_OS_IPHONE
-(NSLayoutDimension*) ios
{
    return (NSLayoutDimension*) self;
}
#else
-(NSLayoutDimension*) mac
{
    return (NSLayoutDimension*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation NSLayoutDimension (MAIConversion)
#else
@implementation NSLayoutDimension (MAIConversion)
#endif
-(MAILayoutDimension*) mai
{
    return (MAILayoutDimension*) self;
}
@end

#pragma clang diagnostic pop
