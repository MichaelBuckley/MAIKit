#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAICollectionViewFlowLayout.h"

@implementation MAICollectionViewFlowLayout

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UICollectionViewFlowLayout class];
#else
    return [NSCollectionViewFlowLayout class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAICollectionViewFlowLayout*) [UICollectionViewFlowLayout alloc];
#else
    return (MAICollectionViewFlowLayout*) [NSCollectionViewFlowLayout alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UICollectionViewFlowLayout*) ios
{
    return (UICollectionViewFlowLayout*) self;
}
#else
-(NSCollectionViewFlowLayout*) mac
{
    return (NSCollectionViewFlowLayout*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UICollectionViewFlowLayout (MAIConversion)
#else
@implementation NSCollectionViewFlowLayout (MAIConversion)
#endif
-(MAICollectionViewFlowLayout*) mai
{
    return (MAICollectionViewFlowLayout*) self;
}
@end

#pragma clang diagnostic pop
