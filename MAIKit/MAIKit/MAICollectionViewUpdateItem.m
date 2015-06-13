#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

#import "MAICollectionViewUpdateItem.h"

@implementation MAICollectionViewUpdateItem

+(Class) class
{
#if TARGET_OS_IPHONE
    return [UICollectionViewUpdateItem class];
#else
    return [NSCollectionViewUpdateItem class];
#endif
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
#if TARGET_OS_IPHONE
    return (MAICollectionViewUpdateItem*) [UICollectionViewUpdateItem alloc];
#else
    return (MAICollectionViewUpdateItem*) [NSCollectionViewUpdateItem alloc];
#endif
}

#if TARGET_OS_IPHONE
-(UICollectionViewUpdateItem*) ios
{
    return (UICollectionViewUpdateItem*) self;
}
#else
-(NSCollectionViewUpdateItem*) mac
{
    return (NSCollectionViewUpdateItem*) self;
}
#endif

@end

#if TARGET_OS_IPHONE
@implementation UICollectionViewUpdateItem (MAIConversion)
#else
@implementation NSCollectionViewUpdateItem (MAIConversion)
#endif
-(MAICollectionViewUpdateItem*) mai
{
    return (MAICollectionViewUpdateItem*) self;
}
@end

#pragma clang diagnostic pop
