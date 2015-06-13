#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIMenuItem.h"

@implementation MAIMenuItem

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIMenuItem class];
#else
    return [NSMenuItem class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIMenuItem*) [UIMenuItem alloc];
#else
    return (MAIMenuItem*) [NSMenuItem alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIMenuItem*) ios
{
    return (UIMenuItem*) self;
}
#else
-(NSMenuItem*) mac
{
    return (NSMenuItem*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIMenuItem (MAIConversion)
#else
@implementation NSMenuItem (MAIConversion)
#endif
-(MAIMenuItem*) mai
{
    return (MAIMenuItem*) self;
}
@end

#pragma clang diagnostic pop
