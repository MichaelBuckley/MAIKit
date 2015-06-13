#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAITableViewRowAction.h"

@implementation MAITableViewRowAction

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UITableViewRowAction class];
#else
    return [NSTableViewRowAction class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAITableViewRowAction*) [UITableViewRowAction alloc];
#else
    return (MAITableViewRowAction*) [NSTableViewRowAction alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UITableViewRowAction*) ios
{
    return (UITableViewRowAction*) self;
}
#else
-(NSTableViewRowAction*) mac
{
    return (NSTableViewRowAction*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UITableViewRowAction (MAIConversion)
#else
@implementation NSTableViewRowAction (MAIConversion)
#endif
-(MAITableViewRowAction*) mai
{
    return (MAITableViewRowAction*) self;
}
@end

#pragma clang diagnostic pop
