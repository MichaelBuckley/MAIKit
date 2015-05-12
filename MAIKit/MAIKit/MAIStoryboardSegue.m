#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAIStoryboardSegue.h"

@implementation MAIStoryboardSegue

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIStoryboardSegue class];
#else
    return [NSStoryboardSegue class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIStoryboardSegue*) [UIStoryboardSegue alloc];
#else
    return (MAIStoryboardSegue*) [NSStoryboardSegue alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIStoryboardSegue*) self init];
#else
    return (id) [(NSStoryboardSegue*) self init];
#endif
#pragma clang diagnostic pop
}


#if TARGET_OS_IPHONE
-(UIStoryboardSegue*) ios
{
    return (UIStoryboardSegue*) self;
}
#else
-(NSStoryboardSegue*) mac
{
    return (NSStoryboardSegue*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIStoryboardSegue (MAIConversion)
#else
@implementation NSStoryboardSegue (MAIConversion)
#endif
-(MAIStoryboardSegue*) mai
{
    return (MAIStoryboardSegue*) self;
}
@end

#pragma clang diagnostic pop
