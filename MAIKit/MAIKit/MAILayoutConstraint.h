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

@protocol MAILayoutConstraintProtocol
+(instancetype)constraintWithItem:(id)view1 attribute:(MAILayoutAttribute)attr1 relatedBy:(MAILayoutRelation)relation toItem:(nullable id)view2 attribute:(MAILayoutAttribute)attr2 multiplier:(CGFloat)multiplier constant:(CGFloat)c;
+(void)activateConstraints:(NSArray<MAILayoutConstraint*>*)constraints;
+(void)deactivateConstraints:(NSArray<MAILayoutConstraint*>*)constraints;
@property(setter=setShouldBeArchived:, getter=shouldBeArchived) BOOL shouldBeArchived;
@property(readonly, getter=firstItem) id firstItem;
@property(readonly, getter=firstAttribute) MAILayoutAttribute firstAttribute;
@property(readonly, getter=relation) MAILayoutRelation relation;
@property(readonly, nullable, getter=secondItem) id secondItem;
@property(readonly, getter=secondAttribute) MAILayoutAttribute secondAttribute;
@property(readonly, getter=multiplier) CGFloat multiplier;
@property(setter=setConstant:, getter=constant) CGFloat constant;
@property(setter=setActive:, getter=isActive) BOOL active;
@property(nullable, setter=setIdentifier:, getter=identifier) NSString* identifier;

#if TARGET_OS_IPHONE
#else
#endif

@end

#if TARGET_OS_IPHONE
@interface MAILayoutConstraint : NSLayoutConstraint<MAILayoutConstraintProtocol>
#else
@interface MAILayoutConstraint : NSLayoutConstraint<MAILayoutConstraintProtocol>
#endif
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
