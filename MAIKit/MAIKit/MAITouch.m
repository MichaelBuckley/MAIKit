#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAITouch.h"

@implementation MAITouch

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UITouch class];
#else
    return [NSTouch class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAITouch*) [UITouch alloc];
#else
    return (MAITouch*) [NSTouch alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UITouch*) ios
{
    return (UITouch*) self;
}
#else
-(NSTouch*) mac
{
    return (NSTouch*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UITouch (MAIConversion)
#else
@implementation NSTouch (MAIConversion)
#endif
-(MAITouch*) mai
{
    return (MAITouch*) self;
}
@end

#pragma clang diagnostic pop
