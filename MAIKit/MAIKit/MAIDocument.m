#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

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

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIDocument*) self init];
#else
    return (id) [(NSDocument*) self init];
#endif
#pragma clang diagnostic pop
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
