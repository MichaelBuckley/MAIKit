#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIResponder.h"

@implementation MAIResponder

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIResponder class];
#else
    return [NSResponder class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIResponder*) [UIResponder alloc];
#else
    return (MAIResponder*) [NSResponder alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIResponder*) ios
{
    return (UIResponder*) self;
}
#else
-(NSResponder*) mac
{
    return (NSResponder*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIResponder (MAIConversion)
#else
@implementation NSResponder (MAIConversion)
#endif
-(MAIResponder*) mai
{
    return (MAIResponder*) self;
}
@end

#pragma clang diagnostic pop
