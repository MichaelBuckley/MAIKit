#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAILayoutGuide.h"

@implementation MAILayoutGuide

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UILayoutGuide class];
#else
    return [NSLayoutGuide class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAILayoutGuide*) [UILayoutGuide alloc];
#else
    return (MAILayoutGuide*) [NSLayoutGuide alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UILayoutGuide*) ios
{
    return (UILayoutGuide*) self;
}
#else
-(NSLayoutGuide*) mac
{
    return (NSLayoutGuide*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UILayoutGuide (MAIConversion)
#else
@implementation NSLayoutGuide (MAIConversion)
#endif
-(MAILayoutGuide*) mai
{
    return (MAILayoutGuide*) self;
}
@end

#pragma clang diagnostic pop
