#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIDataAsset.h"

@implementation MAIDataAsset

+(Class) class
{
#if TARGET_OS_IPHONE
    return [NSDataAsset class];
#else
    return [NSDataAsset class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIDataAsset*) [NSDataAsset alloc];
#else
    return (MAIDataAsset*) [NSDataAsset alloc];
#endif
}

#if TARGET_OS_IPHONE
-(NSDataAsset*) ios
{
    return (NSDataAsset*) self;
}
#else
-(NSDataAsset*) mac
{
    return (NSDataAsset*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation NSDataAsset (MAIConversion)
#else
@implementation NSDataAsset (MAIConversion)
#endif
-(MAIDataAsset*) mai
{
    return (MAIDataAsset*) self;
}
@end

#pragma clang diagnostic pop
