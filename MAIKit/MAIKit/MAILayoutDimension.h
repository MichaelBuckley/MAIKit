#import <TargetConditionals.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-property-no-attribute"

#if TARGET_OS_IPHONE
@import UIKit;
#else
@import AppKit;
#endif

#import "MAIEnums.h"
#import "MAIDeclarations.h"

NS_ASSUME_NONNULL_BEGIN

@protocol MAILayoutDimensionProtocol
-(id<MAILayoutConstraintProtocol>)constraintEqualToConstant:(CGFloat)c;
-(id<MAILayoutConstraintProtocol>)constraintGreaterThanOrEqualToConstant:(CGFloat)c;
-(id<MAILayoutConstraintProtocol>)constraintLessThanOrEqualToConstant:(CGFloat)c;
-(id<MAILayoutConstraintProtocol>)constraintEqualToAnchor:(id<MAILayoutDimensionProtocol>)anchor multiplier:(CGFloat)m;
-(id<MAILayoutConstraintProtocol>)constraintGreaterThanOrEqualToAnchor:(id<MAILayoutDimensionProtocol>)anchor multiplier:(CGFloat)m;
-(id<MAILayoutConstraintProtocol>)constraintLessThanOrEqualToAnchor:(id<MAILayoutDimensionProtocol>)anchor multiplier:(CGFloat)m;
-(id<MAILayoutConstraintProtocol>)constraintEqualToAnchor:(id<MAILayoutDimensionProtocol>)anchor multiplier:(CGFloat)m constant:(CGFloat)c;
-(id<MAILayoutConstraintProtocol>)constraintGreaterThanOrEqualToAnchor:(id<MAILayoutDimensionProtocol>)anchor multiplier:(CGFloat)m constant:(CGFloat)c;
-(id<MAILayoutConstraintProtocol>)constraintLessThanOrEqualToAnchor:(id<MAILayoutDimensionProtocol>)anchor multiplier:(CGFloat)m constant:(CGFloat)c;

#if TARGET_OS_IPHONE
#else
#endif

@end

#if TARGET_OS_IPHONE
@interface MAILayoutDimension : NSLayoutDimension<MAILayoutDimensionProtocol>
#else
@interface MAILayoutDimension : NSLayoutDimension<MAILayoutDimensionProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
