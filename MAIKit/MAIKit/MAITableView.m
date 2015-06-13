#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAITableView.h"

@implementation MAITableView

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UITableView class];
#else
    return [NSTableView class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAITableView*) [UITableView alloc];
#else
    return (MAITableView*) [NSTableView alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UITableView*) ios
{
    return (UITableView*) self;
}
#else
-(NSTableView*) mac
{
    return (NSTableView*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UITableView (MAIConversion)
#else
@implementation NSTableView (MAIConversion)
#endif
-(MAITableView*) mai
{
    return (MAITableView*) self;
}
@end

#pragma clang diagnostic pop
