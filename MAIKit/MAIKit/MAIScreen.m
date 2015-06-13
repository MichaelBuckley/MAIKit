#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIScreen.h"

@implementation MAIScreen

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIScreen class];
#else
    return [NSScreen class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIScreen*) [UIScreen alloc];
#else
    return (MAIScreen*) [NSScreen alloc];
#endif
}
+(MAIScreen*)mainScreen{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [UIScreen mainScreen];
#else
    return (id) [NSScreen mainScreen];
#endif
#pragma clang diagnostic pop
}

#if TARGET_OS_IPHONE
-(UIScreen*) ios
{
    return (UIScreen*) self;
}
#else
-(NSScreen*) mac
{
    return (NSScreen*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIScreen (MAIConversion)
#else
@implementation NSScreen (MAIConversion)
#endif
-(MAIScreen*) mai
{
    return (MAIScreen*) self;
}
@end

#pragma clang diagnostic pop
