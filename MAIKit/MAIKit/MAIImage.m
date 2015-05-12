#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

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

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIImage*) self init];
#else
    return (id) [(NSImage*) self init];
#endif
#pragma clang diagnostic pop
}

-(instancetype)initWithContentsOfFile:(NSString *)path{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIImage*) self initWithContentsOfFile:path];
#else
    return (id) [(NSImage*) self initWithContentsOfFile:path];
#endif
#pragma clang diagnostic pop
}-(instancetype)initWithData:(NSData *)data{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIImage*) self initWithData:data];
#else
    return (id) [(NSImage*) self initWithData:data];
#endif
#pragma clang diagnostic pop
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
