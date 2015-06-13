#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIColor.h"

@implementation MAIColor

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIColor class];
#else
    return [NSColor class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIColor*) [UIColor alloc];
#else
    return (MAIColor*) [NSColor alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIColor*) ios
{
    return (UIColor*) self;
}
#else
-(NSColor*) mac
{
    return (NSColor*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIColor (MAIConversion)
#else
@implementation NSColor (MAIConversion)
#endif
-(MAIColor*) mai
{
    return (MAIColor*) self;
}
@end

#pragma clang diagnostic pop
