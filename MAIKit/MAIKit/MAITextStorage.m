#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAITextStorage.h"

@implementation MAITextStorage

+(Class) class
{
#if TARGET_OS_IPHONE
    return [NSTextStorage class];
#else
    return [NSTextStorage class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAITextStorage*) [NSTextStorage alloc];
#else
    return (MAITextStorage*) [NSTextStorage alloc];
#endif
}

#if TARGET_OS_IPHONE
-(NSTextStorage*) ios
{
    return (NSTextStorage*) self;
}
#else
-(NSTextStorage*) mac
{
    return (NSTextStorage*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation NSTextStorage (MAIConversion)
#else
@implementation NSTextStorage (MAIConversion)
#endif
-(MAITextStorage*) mai
{
    return (MAITextStorage*) self;
}
@end

#pragma clang diagnostic pop
