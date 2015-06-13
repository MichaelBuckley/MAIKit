#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAICollectionViewLayout.h"

@implementation MAICollectionViewLayout

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UICollectionViewLayout class];
#else
    return [NSCollectionViewLayout class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAICollectionViewLayout*) [UICollectionViewLayout alloc];
#else
    return (MAICollectionViewLayout*) [NSCollectionViewLayout alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UICollectionViewLayout*) ios
{
    return (UICollectionViewLayout*) self;
}
#else
-(NSCollectionViewLayout*) mac
{
    return (NSCollectionViewLayout*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UICollectionViewLayout (MAIConversion)
#else
@implementation NSCollectionViewLayout (MAIConversion)
#endif
-(MAICollectionViewLayout*) mai
{
    return (MAICollectionViewLayout*) self;
}
@end

#pragma clang diagnostic pop
