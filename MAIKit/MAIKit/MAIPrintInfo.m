#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIPrintInfo.h"

@implementation MAIPrintInfo

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIPrintInfo class];
#else
    return [NSPrintInfo class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIPrintInfo*) [UIPrintInfo alloc];
#else
    return (MAIPrintInfo*) [NSPrintInfo alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIPrintInfo*) ios
{
    return (UIPrintInfo*) self;
}
#else
-(NSPrintInfo*) mac
{
    return (NSPrintInfo*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIPrintInfo (MAIConversion)
#else
@implementation NSPrintInfo (MAIConversion)
#endif
-(MAIPrintInfo*) mai
{
    return (MAIPrintInfo*) self;
}
@end

#pragma clang diagnostic pop
