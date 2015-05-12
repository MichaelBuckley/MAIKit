#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAIView.h"

@implementation MAIView

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIView class];
#else
    return [NSView class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIView*) [UIView alloc];
#else
    return (MAIView*) [NSView alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIView*) self init];
#else
    return (id) [(NSView*) self init];
#endif
#pragma clang diagnostic pop
}

-(instancetype)initWithFrame:(CGRect)frame{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIView*) self initWithFrame:frame];
#else
    return (id) [(NSView*) self initWithFrame:frame];
#endif
#pragma clang diagnostic pop
}
#if TARGET_OS_IPHONE
-(UIView*) ios
{
    return (UIView*) self;
}
#else
-(NSView*) mac
{
    return (NSView*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIView (MAIConversion)
#else
@implementation NSView (MAIConversion)
#endif
-(MAIView*) mai
{
    return (MAIView*) self;
}
@end

#pragma clang diagnostic pop
