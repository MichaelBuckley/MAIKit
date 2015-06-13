#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

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
