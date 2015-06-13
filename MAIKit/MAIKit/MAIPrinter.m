#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

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
