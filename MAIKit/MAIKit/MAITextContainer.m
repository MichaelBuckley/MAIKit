#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAITextContainer.h"

@implementation MAITextContainer

+(Class) class
{
#if TARGET_OS_IPHONE
    return [NSTextContainer class];
#else
    return [NSTextContainer class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAITextContainer*) [NSTextContainer alloc];
#else
    return (MAITextContainer*) [NSTextContainer alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(NSTextContainer*) self init];
#else
    return (id) [(NSTextContainer*) self init];
#endif
#pragma clang diagnostic pop
}


#if TARGET_OS_IPHONE
-(NSTextContainer*) ios
{
    return (NSTextContainer*) self;
}
#else
-(NSTextContainer*) mac
{
    return (NSTextContainer*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation NSTextContainer (MAIConversion)
#else
@implementation NSTextContainer (MAIConversion)
#endif
-(MAITextContainer*) mai
{
    return (MAITextContainer*) self;
}
@end

#pragma clang diagnostic pop
