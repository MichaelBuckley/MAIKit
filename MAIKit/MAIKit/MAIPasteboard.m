#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAIPasteboard.h"

@implementation MAIPasteboard

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIPasteboard class];
#else
    return [NSPasteboard class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIPasteboard*) [UIPasteboard alloc];
#else
    return (MAIPasteboard*) [NSPasteboard alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIPasteboard*) self init];
#else
    return (id) [(NSPasteboard*) self init];
#endif
#pragma clang diagnostic pop
}


#if TARGET_OS_IPHONE
-(UIPasteboard*) ios
{
    return (UIPasteboard*) self;
}
#else
-(NSPasteboard*) mac
{
    return (NSPasteboard*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIPasteboard (MAIConversion)
#else
@implementation NSPasteboard (MAIConversion)
#endif
-(MAIPasteboard*) mai
{
    return (MAIPasteboard*) self;
}
@end

#pragma clang diagnostic pop
