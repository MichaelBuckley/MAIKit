#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIImageView.h"

@implementation MAIImageView

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIImageView class];
#else
    return [NSImageView class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIImageView*) [UIImageView alloc];
#else
    return (MAIImageView*) [NSImageView alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIImageView*) ios
{
    return (UIImageView*) self;
}
#else
-(NSImageView*) mac
{
    return (NSImageView*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIImageView (MAIConversion)
#else
@implementation NSImageView (MAIConversion)
#endif
-(MAIImageView*) mai
{
    return (MAIImageView*) self;
}
@end

#pragma clang diagnostic pop
