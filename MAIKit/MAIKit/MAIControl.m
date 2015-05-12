#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAIControl.h"

@implementation MAIControl

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIControl class];
#else
    return [NSControl class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIControl*) [UIControl alloc];
#else
    return (MAIControl*) [NSControl alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIControl*) self init];
#else
    return (id) [(NSControl*) self init];
#endif
#pragma clang diagnostic pop
}

-(instancetype)initWithFrame:(CGRect)frame{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIControl*) self initWithFrame:frame];
#else
    return (id) [(NSControl*) self initWithFrame:frame];
#endif
#pragma clang diagnostic pop
}
#if TARGET_OS_IPHONE
-(UIControl*) ios
{
    return (UIControl*) self;
}
#else
-(NSControl*) mac
{
    return (NSControl*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIControl (MAIConversion)
#else
@implementation NSControl (MAIConversion)
#endif
-(MAIControl*) mai
{
    return (MAIControl*) self;
}
@end

#pragma clang diagnostic pop
