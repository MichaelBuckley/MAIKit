#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIWindow.h"

@implementation MAIWindow

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIWindow class];
#else
    return [NSWindow class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIWindow*) [UIWindow alloc];
#else
    return (MAIWindow*) [NSWindow alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIWindow*) ios
{
    return (UIWindow*) self;
}
#else
-(NSWindow*) mac
{
    return (NSWindow*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIWindow (MAIConversion)
#else
@implementation NSWindow (MAIConversion)
#endif
-(MAIWindow*) mai
{
    return (MAIWindow*) self;
}
@end

#pragma clang diagnostic pop
