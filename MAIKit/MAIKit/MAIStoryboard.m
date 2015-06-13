#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAIStoryboard.h"

@implementation MAIStoryboard

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UIStoryboard class];
#else
    return [NSStoryboard class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAIStoryboard*) [UIStoryboard alloc];
#else
    return (MAIStoryboard*) [NSStoryboard alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UIStoryboard*) ios
{
    return (UIStoryboard*) self;
}
#else
-(NSStoryboard*) mac
{
    return (NSStoryboard*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UIStoryboard (MAIConversion)
#else
@implementation NSStoryboard (MAIConversion)
#endif
-(MAIStoryboard*) mai
{
    return (MAIStoryboard*) self;
}
@end

#pragma clang diagnostic pop
