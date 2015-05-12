#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAIFont.h"

@implementation MAIFont

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIFont class];
#else
    return [NSFont class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIFont*) [UIFont alloc];
#else
    return (MAIFont*) [NSFont alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIFont*) self init];
#else
    return (id) [(NSFont*) self init];
#endif
#pragma clang diagnostic pop
}


#if TARGET_OS_IPHONE
-(UIFont*) ios
{
    return (UIFont*) self;
}
#else
-(NSFont*) mac
{
    return (NSFont*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIFont (MAIConversion)
#else
@implementation NSFont (MAIConversion)
#endif
-(MAIFont*) mai
{
    return (MAIFont*) self;
}
@end

#pragma clang diagnostic pop
