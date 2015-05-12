#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

#import "MAIPrinter.h"

@implementation MAIPrinter

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIPrinter class];
#else
    return [NSPrinter class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIPrinter*) [UIPrinter alloc];
#else
    return (MAIPrinter*) [NSPrinter alloc];
#endif
}

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(UIPrinter*) self init];
#else
    return (id) [(NSPrinter*) self init];
#endif
#pragma clang diagnostic pop
}


#if TARGET_OS_IPHONE
-(UIPrinter*) ios
{
    return (UIPrinter*) self;
}
#else
-(NSPrinter*) mac
{
    return (NSPrinter*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIPrinter (MAIConversion)
#else
@implementation NSPrinter (MAIConversion)
#endif
-(MAIPrinter*) mai
{
    return (MAIPrinter*) self;
}
@end

#pragma clang diagnostic pop
