#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

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
