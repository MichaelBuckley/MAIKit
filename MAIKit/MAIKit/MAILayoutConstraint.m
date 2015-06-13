#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAILayoutConstraint.h"

@implementation MAILayoutConstraint

+(Class) class
{
#if TARGET_OS_IPHONE
    return [NSLayoutConstraint class];
#else
    return [NSLayoutConstraint class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAILayoutConstraint*) [NSLayoutConstraint alloc];
#else
    return (MAILayoutConstraint*) [NSLayoutConstraint alloc];
#endif
}

#if TARGET_OS_IPHONE
-(NSLayoutConstraint*) ios
{
    return (NSLayoutConstraint*) self;
}
#else
-(NSLayoutConstraint*) mac
{
    return (NSLayoutConstraint*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation NSLayoutConstraint (MAIConversion)
#else
@implementation NSLayoutConstraint (MAIConversion)
#endif
-(MAILayoutConstraint*) mai
{
    return (MAILayoutConstraint*) self;
}
@end

#pragma clang diagnostic pop
