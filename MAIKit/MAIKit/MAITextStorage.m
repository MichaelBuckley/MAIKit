#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

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

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(NSTextStorage*) self init];
#else
    return (id) [(NSTextStorage*) self init];
#endif
#pragma clang diagnostic pop
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
