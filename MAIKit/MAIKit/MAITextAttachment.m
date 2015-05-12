#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAITextAttachment.h"

@implementation MAITextAttachment

+(Class) class
{
#if TARGET_OS_IPHONE
    return [NSTextAttachment class];
#else
    return [NSTextAttachment class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAITextAttachment*) [NSTextAttachment alloc];
#else
    return (MAITextAttachment*) [NSTextAttachment alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(NSTextAttachment*) self init];
#else
    return (id) [(NSTextAttachment*) self init];
#endif
#pragma clang diagnostic pop
}


#if TARGET_OS_IPHONE
-(NSTextAttachment*) ios
{
    return (NSTextAttachment*) self;
}
#else
-(NSTextAttachment*) mac
{
    return (NSTextAttachment*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation NSTextAttachment (MAIConversion)
#else
@implementation NSTextAttachment (MAIConversion)
#endif
-(MAITextAttachment*) mai
{
    return (MAITextAttachment*) self;
}
@end

#pragma clang diagnostic pop
