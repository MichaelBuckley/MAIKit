#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAILayoutXAxisAnchor.h"

@implementation MAILayoutXAxisAnchor

+(Class) class
{
#if TARGET_OS_IPHONE
    return [NSLayoutXAxisAnchor class];
#else
    return [NSLayoutXAxisAnchor class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAILayoutXAxisAnchor*) [NSLayoutXAxisAnchor alloc];
#else
    return (MAILayoutXAxisAnchor*) [NSLayoutXAxisAnchor alloc];
#endif
}

#if TARGET_OS_IPHONE
-(NSLayoutXAxisAnchor*) ios
{
    return (NSLayoutXAxisAnchor*) self;
}
#else
-(NSLayoutXAxisAnchor*) mac
{
    return (NSLayoutXAxisAnchor*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation NSLayoutXAxisAnchor (MAIConversion)
#else
@implementation NSLayoutXAxisAnchor (MAIConversion)
#endif
-(MAILayoutXAxisAnchor*) mai
{
    return (MAILayoutXAxisAnchor*) self;
}
@end

#pragma clang diagnostic pop
