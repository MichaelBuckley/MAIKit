#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAIVisualEffectView.h"

@implementation MAIVisualEffectView

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIVisualEffectView class];
#else
    return [NSVisualEffectView class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIVisualEffectView*) [UIVisualEffectView alloc];
#else
    return (MAIVisualEffectView*) [NSVisualEffectView alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIVisualEffectView*) self init];
#else
    return (id) [(NSVisualEffectView*) self init];
#endif
#pragma clang diagnostic pop
}

-(instancetype)initWithFrame:(CGRect)frame{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIVisualEffectView*) self initWithFrame:frame];
#else
    return (id) [(NSVisualEffectView*) self initWithFrame:frame];
#endif
#pragma clang diagnostic pop
}
#if TARGET_OS_IPHONE
-(UIVisualEffectView*) ios
{
    return (UIVisualEffectView*) self;
}
#else
-(NSVisualEffectView*) mac
{
    return (NSVisualEffectView*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIVisualEffectView (MAIConversion)
#else
@implementation NSVisualEffectView (MAIConversion)
#endif
-(MAIVisualEffectView*) mai
{
    return (MAIVisualEffectView*) self;
}
@end

#pragma clang diagnostic pop
