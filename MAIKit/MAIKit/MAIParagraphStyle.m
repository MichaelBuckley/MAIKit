#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIParagraphStyle.h"

@implementation MAIParagraphStyle

+(Class) class
{
#if TARGET_OS_IPHONE
    return [NSParagraphStyle class];
#else
    return [NSParagraphStyle class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIParagraphStyle*) [NSParagraphStyle alloc];
#else
    return (MAIParagraphStyle*) [NSParagraphStyle alloc];
#endif
}

#if TARGET_OS_IPHONE
-(NSParagraphStyle*) ios
{
    return (NSParagraphStyle*) self;
}
#else
-(NSParagraphStyle*) mac
{
    return (NSParagraphStyle*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation NSParagraphStyle (MAIConversion)
#else
@implementation NSParagraphStyle (MAIConversion)
#endif
-(MAIParagraphStyle*) mai
{
    return (MAIParagraphStyle*) self;
}
@end

#pragma clang diagnostic pop
