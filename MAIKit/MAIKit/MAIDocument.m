#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIDocument.h"

@implementation MAIDocument

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIDocument class];
#else
    return [NSDocument class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIDocument*) [UIDocument alloc];
#else
    return (MAIDocument*) [NSDocument alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIDocument*) ios
{
    return (UIDocument*) self;
}
#else
-(NSDocument*) mac
{
    return (NSDocument*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIDocument (MAIConversion)
#else
@implementation NSDocument (MAIConversion)
#endif
-(MAIDocument*) mai
{
    return (MAIDocument*) self;
}
@end

#pragma clang diagnostic pop
