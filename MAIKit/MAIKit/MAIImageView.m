#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

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

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIImageView*) self init];
#else
    return (id) [(NSImageView*) self init];
#endif
#pragma clang diagnostic pop
}

-(instancetype)initWithFrame:(CGRect)frame{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIImageView*) self initWithFrame:frame];
#else
    return (id) [(NSImageView*) self initWithFrame:frame];
#endif
#pragma clang diagnostic pop
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
