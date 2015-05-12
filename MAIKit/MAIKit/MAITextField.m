#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAITextField.h"

@implementation MAITextField

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UITextField class];
#else
    return [NSTextField class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAITextField*) [UITextField alloc];
#else
    return (MAITextField*) [NSTextField alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UITextField*) self init];
#else
    return (id) [(NSTextField*) self init];
#endif
#pragma clang diagnostic pop
}

-(instancetype)initWithFrame:(CGRect)frame{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UITextField*) self initWithFrame:frame];
#else
    return (id) [(NSTextField*) self initWithFrame:frame];
#endif
#pragma clang diagnostic pop
}
#if TARGET_OS_IPHONE
-(UITextField*) ios
{
    return (UITextField*) self;
}
#else
-(NSTextField*) mac
{
    return (NSTextField*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UITextField (MAIConversion)
#else
@implementation NSTextField (MAIConversion)
#endif
-(MAITextField*) mai
{
    return (MAITextField*) self;
}
@end

#pragma clang diagnostic pop
