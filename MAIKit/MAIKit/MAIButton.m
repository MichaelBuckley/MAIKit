#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAIButton.h"

@implementation MAIButton

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIButton class];
#else
    return [NSButton class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIButton*) [UIButton alloc];
#else
    return (MAIButton*) [NSButton alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIButton*) self init];
#else
    return (id) [(NSButton*) self init];
#endif
#pragma clang diagnostic pop
}

-(instancetype)initWithFrame:(CGRect)frame{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIButton*) self initWithFrame:frame];
#else
    return (id) [(NSButton*) self initWithFrame:frame];
#endif
#pragma clang diagnostic pop
}
#if TARGET_OS_IPHONE
-(UIButton*) ios
{
    return (UIButton*) self;
}
#else
-(NSButton*) mac
{
    return (NSButton*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIButton (MAIConversion)
#else
@implementation NSButton (MAIConversion)
#endif
-(MAIButton*) mai
{
    return (MAIButton*) self;
}
@end

#pragma clang diagnostic pop
