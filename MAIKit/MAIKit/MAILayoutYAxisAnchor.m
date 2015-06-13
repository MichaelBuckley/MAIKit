#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAILayoutYAxisAnchor.h"

@implementation MAILayoutYAxisAnchor

+(Class) class
{
#if TARGET_OS_IPHONE
    return [NSLayoutYAxisAnchor class];
#else
    return [NSLayoutYAxisAnchor class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAILayoutYAxisAnchor*) [NSLayoutYAxisAnchor alloc];
#else
    return (MAILayoutYAxisAnchor*) [NSLayoutYAxisAnchor alloc];
#endif
}

#if TARGET_OS_IPHONE
-(NSLayoutYAxisAnchor*) ios
{
    return (NSLayoutYAxisAnchor*) self;
}
#else
-(NSLayoutYAxisAnchor*) mac
{
    return (NSLayoutYAxisAnchor*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation NSLayoutYAxisAnchor (MAIConversion)
#else
@implementation NSLayoutYAxisAnchor (MAIConversion)
#endif
-(MAILayoutYAxisAnchor*) mai
{
    return (MAILayoutYAxisAnchor*) self;
}
@end

#pragma clang diagnostic pop
