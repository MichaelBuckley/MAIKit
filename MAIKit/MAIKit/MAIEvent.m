#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIEvent.h"

@implementation MAIEvent

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIEvent class];
#else
    return [NSEvent class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIEvent*) [UIEvent alloc];
#else
    return (MAIEvent*) [NSEvent alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIEvent*) ios
{
    return (UIEvent*) self;
}
#else
-(NSEvent*) mac
{
    return (NSEvent*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIEvent (MAIConversion)
#else
@implementation NSEvent (MAIConversion)
#endif
-(MAIEvent*) mai
{
    return (MAIEvent*) self;
}
@end

#pragma clang diagnostic pop
