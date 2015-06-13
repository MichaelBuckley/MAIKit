#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIStackView.h"

@implementation MAIStackView

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIStackView class];
#else
    return [NSStackView class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIStackView*) [UIStackView alloc];
#else
    return (MAIStackView*) [NSStackView alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIStackView*) ios
{
    return (UIStackView*) self;
}
#else
-(NSStackView*) mac
{
    return (NSStackView*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIStackView (MAIConversion)
#else
@implementation NSStackView (MAIConversion)
#endif
-(MAIStackView*) mai
{
    return (MAIStackView*) self;
}
@end

#pragma clang diagnostic pop
