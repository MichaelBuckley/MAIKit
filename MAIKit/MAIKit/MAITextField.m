#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

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
