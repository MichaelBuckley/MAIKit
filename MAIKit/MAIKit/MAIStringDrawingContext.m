#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIStringDrawingContext.h"

@implementation MAIStringDrawingContext

+(Class) class
{
#if TARGET_OS_IPHONE
    return [NSStringDrawingContext class];
#else
    return [NSStringDrawingContext class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIStringDrawingContext*) [NSStringDrawingContext alloc];
#else
    return (MAIStringDrawingContext*) [NSStringDrawingContext alloc];
#endif
}

#if TARGET_OS_IPHONE
-(NSStringDrawingContext*) ios
{
    return (NSStringDrawingContext*) self;
}
#else
-(NSStringDrawingContext*) mac
{
    return (NSStringDrawingContext*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation NSStringDrawingContext (MAIConversion)
#else
@implementation NSStringDrawingContext (MAIConversion)
#endif
-(MAIStringDrawingContext*) mai
{
    return (MAIStringDrawingContext*) self;
}
@end

#pragma clang diagnostic pop
