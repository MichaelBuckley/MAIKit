#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAILayoutManager.h"

@implementation MAILayoutManager

+(Class) class
{
#if TARGET_OS_IPHONE
    return [NSLayoutManager class];
#else
    return [NSLayoutManager class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAILayoutManager*) [NSLayoutManager alloc];
#else
    return (MAILayoutManager*) [NSLayoutManager alloc];
#endif
}

#if TARGET_OS_IPHONE
-(NSLayoutManager*) ios
{
    return (NSLayoutManager*) self;
}
#else
-(NSLayoutManager*) mac
{
    return (NSLayoutManager*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation NSLayoutManager (MAIConversion)
#else
@implementation NSLayoutManager (MAIConversion)
#endif
-(MAILayoutManager*) mai
{
    return (MAILayoutManager*) self;
}
@end

#pragma clang diagnostic pop
