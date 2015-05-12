#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAIBezierPath.h"

@implementation MAIBezierPath

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIBezierPath class];
#else
    return [NSBezierPath class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIBezierPath*) [UIBezierPath alloc];
#else
    return (MAIBezierPath*) [NSBezierPath alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIBezierPath*) self init];
#else
    return (id) [(NSBezierPath*) self init];
#endif
#pragma clang diagnostic pop
}


#if TARGET_OS_IPHONE
-(UIBezierPath*) ios
{
    return (UIBezierPath*) self;
}
#else
-(NSBezierPath*) mac
{
    return (NSBezierPath*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIBezierPath (MAIConversion)
#else
@implementation NSBezierPath (MAIConversion)
#endif
-(MAIBezierPath*) mai
{
    return (MAIBezierPath*) self;
}
@end

#pragma clang diagnostic pop
