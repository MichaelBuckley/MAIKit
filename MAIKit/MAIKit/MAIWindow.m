#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

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

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIWindow*) self init];
#else
    return (id) [(NSWindow*) self init];
#endif
#pragma clang diagnostic pop
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
