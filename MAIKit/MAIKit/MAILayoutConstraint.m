#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-property-synthesis"
#pragma clang diagnostic ignored "-Wprotocol"
#pragma clang diagnostic ignored "-Wincomplete-implementation"

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

- (instancetype)init
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [(NSLayoutConstraint*) self init];
#else
    return (id) [(NSLayoutConstraint*) self init];
#endif
#pragma clang diagnostic pop
}


+(instancetype)constraintWithItem:(id)view1 attribute:(MAILayoutAttribute)attr1 relatedBy:(MAILayoutRelation)relation toItem:(id)view2 attribute:(MAILayoutAttribute)attr2 multiplier:(CGFloat)multiplier constant:(CGFloat)c{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#pragma clang diagnostic ignored "-Wenum-conversion"
#if TARGET_OS_IPHONE
    return (id) [NSLayoutConstraint constraintWithItem:view1 attribute:attr1 relatedBy:relation toItem:view2 attribute:attr2 multiplier:multiplier constant:c];
#else
    return (id) [NSLayoutConstraint constraintWithItem:view1 attribute:attr1 relatedBy:relation toItem:view2 attribute:attr2 multiplier:multiplier constant:c];
#endif
#pragma clang diagnostic pop
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
