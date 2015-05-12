#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

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

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIEvent*) self init];
#else
    return (id) [(NSEvent*) self init];
#endif
#pragma clang diagnostic pop
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
