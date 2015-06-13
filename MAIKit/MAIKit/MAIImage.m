#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIImage.h"

@implementation MAIImage

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIImage class];
#else
    return [NSImage class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIImage*) [UIImage alloc];
#else
    return (MAIImage*) [NSImage alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIImage*) ios
{
    return (UIImage*) self;
}
#else
-(NSImage*) mac
{
    return (NSImage*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIImage (MAIConversion)
#else
@implementation NSImage (MAIConversion)
#endif
-(MAIImage*) mai
{
    return (MAIImage*) self;
}
@end

#pragma clang diagnostic pop
