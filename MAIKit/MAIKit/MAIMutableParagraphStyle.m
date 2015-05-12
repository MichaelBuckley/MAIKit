#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAIMutableParagraphStyle.h"

@implementation MAIMutableParagraphStyle

+(Class) class
{
#if TARGET_OS_IPHONE
    return [NSMutableParagraphStyle class];
#else
    return [NSMutableParagraphStyle class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIMutableParagraphStyle*) [NSMutableParagraphStyle alloc];
#else
    return (MAIMutableParagraphStyle*) [NSMutableParagraphStyle alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(NSMutableParagraphStyle*) self init];
#else
    return (id) [(NSMutableParagraphStyle*) self init];
#endif
#pragma clang diagnostic pop
}


#if TARGET_OS_IPHONE
-(NSMutableParagraphStyle*) ios
{
    return (NSMutableParagraphStyle*) self;
}
#else
-(NSMutableParagraphStyle*) mac
{
    return (NSMutableParagraphStyle*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation NSMutableParagraphStyle (MAIConversion)
#else
@implementation NSMutableParagraphStyle (MAIConversion)
#endif
-(MAIMutableParagraphStyle*) mai
{
    return (MAIMutableParagraphStyle*) self;
}
@end

#pragma clang diagnostic pop
