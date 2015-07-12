#import <TargetConditionals.h>

#if TARGET_OS_IPHONE
@import UIKit;
#else
@import AppKit;
#endif

#import "MAIEnums.h"

#import "MAILayoutManagerDelegate.h"
#import "MAITextLayoutOrientationProvider.h"
#import "MAITextAttachmentContainer.h"
#import "MAITextStorageDelegate.h"
#import "MAIApplicationDelegate.h"
#import "MAICollectionViewDataSource.h"
#import "MAICollectionViewDelegate.h"
#import "MAICollectionViewDelegateFlowLayout.h"
#import "MAIGestureRecognizerDelegate.h"
#import "MAITableViewDataSource.h"
#import "MAITableViewDelegate.h"
#import "MAITextFieldDelegate.h"
#import "MAITextInput.h"
#import "MAITextViewDelegate.h"
#import "MAIToolbarDelegate.h"

@class MAIDataAsset;
@protocol MAIDataAssetProtocol;
@class MAILayoutXAxisAnchor;
@protocol MAILayoutXAxisAnchorProtocol;
@class MAILayoutYAxisAnchor;
@protocol MAILayoutYAxisAnchorProtocol;
@class MAILayoutDimension;
@protocol MAILayoutDimensionProtocol;
@class MAILayoutConstraint;
@protocol MAILayoutConstraintProtocol;
@class MAITextTab;
@protocol MAITextTabProtocol;
@class MAIParagraphStyle;
@protocol MAIParagraphStyleProtocol;
@class MAIMutableParagraphStyle;
@protocol MAIMutableParagraphStyleProtocol;
@class MAIShadow;
@protocol MAIShadowProtocol;
@class MAIStringDrawingContext;
@protocol MAIStringDrawingContextProtocol;
@class MAITextAttachment;
@protocol MAITextAttachmentProtocol;
@class MAITextContainer;
@protocol MAITextContainerProtocol;
@class MAITextStorage;
@protocol MAITextStorageProtocol;
@class MAIAccessibilityElement;
@protocol MAIAccessibilityElementProtocol;
@class MAIApplication;
@protocol MAIApplicationProtocol;
@class MAIBezierPath;
@protocol MAIBezierPathProtocol;
@class MAIButton;
@protocol MAIButtonProtocol;
@class MAICollectionView;
@protocol MAICollectionViewProtocol;
@class MAICollectionViewFlowLayoutInvalidationContext;
@protocol MAICollectionViewFlowLayoutInvalidationContextProtocol;
@class MAICollectionViewFlowLayout;
@protocol MAICollectionViewFlowLayoutProtocol;
@class MAICollectionViewLayoutAttributes;
@protocol MAICollectionViewLayoutAttributesProtocol;
@class MAICollectionViewUpdateItem;
@protocol MAICollectionViewUpdateItemProtocol;
@class MAICollectionViewLayoutInvalidationContext;
@protocol MAICollectionViewLayoutInvalidationContextProtocol;
@class MAICollectionViewLayout;
@protocol MAICollectionViewLayoutProtocol;
@class MAICollectionViewTransitionLayout;
@protocol MAICollectionViewTransitionLayoutProtocol;
@class MAIColor;
@protocol MAIColorProtocol;
@class MAIControl;
@protocol MAIControlProtocol;
@class MAIDatePicker;
@protocol MAIDatePickerProtocol;
@class MAIDocument;
@protocol MAIDocumentProtocol;
@class MAIEvent;
@protocol MAIEventProtocol;
@class MAIFont;
@protocol MAIFontProtocol;
@class MAIFontDescriptor;
@protocol MAIFontDescriptorProtocol;
@class MAIGestureRecognizer;
@protocol MAIGestureRecognizerProtocol;
@class MAIImage;
@protocol MAIImageProtocol;
@class MAIImageView;
@protocol MAIImageViewProtocol;
@class MAILayoutGuide;
@protocol MAILayoutGuideProtocol;
@class MAIMenuItem;
@protocol MAIMenuItemProtocol;
@class MAINib;
@protocol MAINibProtocol;
@class MAIPanGestureRecognizer;
@protocol MAIPanGestureRecognizerProtocol;
@class MAIPasteboard;
@protocol MAIPasteboardProtocol;
@class MAIPrinter;
@protocol MAIPrinterProtocol;
@class MAIPrintInfo;
@protocol MAIPrintInfoProtocol;
@class MAIResponder;
@protocol MAIResponderProtocol;
@class MAIRotationGestureRecognizer;
@protocol MAIRotationGestureRecognizerProtocol;
@class MAIScreen;
@protocol MAIScreenProtocol;
@class MAIScrollView;
@protocol MAIScrollViewProtocol;
@class MAISegmentedControl;
@protocol MAISegmentedControlProtocol;
@class MAISlider;
@protocol MAISliderProtocol;
@class MAISplitViewController;
@protocol MAISplitViewControllerProtocol;
@class MAIStackView;
@protocol MAIStackViewProtocol;
@class MAIStepper;
@protocol MAIStepperProtocol;
@class MAIStoryboard;
@protocol MAIStoryboardProtocol;
@class MAIStoryboardSegue;
@protocol MAIStoryboardSegueProtocol;
@class MAITableViewRowAction;
@protocol MAITableViewRowActionProtocol;
@class MAITableView;
@protocol MAITableViewProtocol;
@class MAITextField;
@protocol MAITextFieldProtocol;
@class MAITextView;
@protocol MAITextViewProtocol;
@class MAIToolbar;
@protocol MAIToolbarProtocol;
@class MAITouch;
@protocol MAITouchProtocol;
@class MAIView;
@protocol MAIViewProtocol;
@class MAIViewController;
@protocol MAIViewControllerProtocol;
@class MAIVisualEffectView;
@protocol MAIVisualEffectViewProtocol;
@class MAIWindow;
@protocol MAIWindowProtocol;

NS_ASSUME_NONNULL_BEGIN

@protocol MAILayoutManagerProtocol
-(instancetype)init;
-(nullable instancetype)initWithCoder:(NSCoder*)coder;
-(void)addTextContainer:(id<MAITextContainerProtocol>)container;
-(void)insertTextContainer:(id<MAITextContainerProtocol>)container atIndex:(NSUInteger)index;
-(void)removeTextContainerAtIndex:(NSUInteger)index;
-(void)textContainerChangedGeometry:(id<MAITextContainerProtocol>)container;
-(void)invalidateGlyphsForCharacterRange:(NSRange)charRange changeInLength:(NSInteger)delta actualCharacterRange:(nullable NSRangePointer)actualCharRange;
-(void)invalidateLayoutForCharacterRange:(NSRange)charRange actualCharacterRange:(nullable NSRangePointer)actualCharRange;
-(void)invalidateDisplayForCharacterRange:(NSRange)charRange;
-(void)invalidateDisplayForGlyphRange:(NSRange)glyphRange;
-(void)processEditingForTextStorage:(id<MAITextStorageProtocol>)textStorage edited:(MAITextStorageEditActions)editMask range:(NSRange)newCharRange changeInLength:(NSInteger)delta invalidatedRange:(NSRange)invalidatedCharRange;
-(void)ensureGlyphsForCharacterRange:(NSRange)charRange;
-(void)ensureGlyphsForGlyphRange:(NSRange)glyphRange;
-(void)ensureLayoutForCharacterRange:(NSRange)charRange;
-(void)ensureLayoutForGlyphRange:(NSRange)glyphRange;
-(void)ensureLayoutForTextContainer:(id<MAITextContainerProtocol>)container;
-(void)ensureLayoutForBoundingRect:(CGRect)bounds inTextContainer:(id<MAITextContainerProtocol>)container;
-(void)setGlyphs:(const CGGlyph*)glyphs properties:(const MAIGlyphProperty*)props characterIndexes:(const NSUInteger*)charIndexes font:(id<MAIFontProtocol>)aFont forGlyphRange:(NSRange)glyphRange;
-(CGGlyph)CGGlyphAtIndex:(NSUInteger)glyphIndex isValidIndex:(nullable BOOL*)isValidIndex;
-(CGGlyph)CGGlyphAtIndex:(NSUInteger)glyphIndex;
-(BOOL)isValidGlyphIndex:(NSUInteger)glyphIndex;
-(MAIGlyphProperty)propertyForGlyphAtIndex:(NSUInteger)glyphIndex;
-(NSUInteger)characterIndexForGlyphAtIndex:(NSUInteger)glyphIndex;
-(NSUInteger)glyphIndexForCharacterAtIndex:(NSUInteger)charIndex;
-(NSUInteger)getGlyphsInRange:(NSRange)glyphRange glyphs:(nullable CGGlyph*)glyphBuffer properties:(nullable MAIGlyphProperty*)props characterIndexes:(nullable NSUInteger*)charIndexBuffer bidiLevels:(nullable unsigned char*)bidiLevelBuffer;
-(void)setTextContainer:(id<MAITextContainerProtocol>)container forGlyphRange:(NSRange)glyphRange;
-(void)setLineFragmentRect:(CGRect)fragmentRect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)usedRect;
-(void)setExtraLineFragmentRect:(CGRect)fragmentRect usedRect:(CGRect)usedRect textContainer:(id<MAITextContainerProtocol>)container;
-(void)setLocation:(CGPoint)location forStartOfGlyphRange:(NSRange)glyphRange;
-(void)setNotShownAttribute:(BOOL)flag forGlyphAtIndex:(NSUInteger)glyphIndex;
-(void)setDrawsOutsideLineFragment:(BOOL)flag forGlyphAtIndex:(NSUInteger)glyphIndex;
-(void)getFirstUnlaidCharacterIndex:(nullable NSUInteger*)charIndex glyphIndex:(nullable NSUInteger*)glyphIndex;
-(NSUInteger)firstUnlaidCharacterIndex;
-(NSUInteger)firstUnlaidGlyphIndex;
-(nullable id<MAITextContainerProtocol>)textContainerForGlyphAtIndex:(NSUInteger)glyphIndex effectiveRange:(nullable NSRangePointer)effectiveGlyphRange;
-(nullable id<MAITextContainerProtocol>)textContainerForGlyphAtIndex:(NSUInteger)glyphIndex effectiveRange:(nullable NSRangePointer)effectiveGlyphRange withoutAdditionalLayout:(BOOL)flag;
-(CGRect)usedRectForTextContainer:(id<MAITextContainerProtocol>)container;
-(CGRect)lineFragmentRectForGlyphAtIndex:(NSUInteger)glyphIndex effectiveRange:(nullable NSRangePointer)effectiveGlyphRange;
-(CGRect)lineFragmentRectForGlyphAtIndex:(NSUInteger)glyphIndex effectiveRange:(nullable NSRangePointer)effectiveGlyphRange withoutAdditionalLayout:(BOOL)flag;
-(CGRect)lineFragmentUsedRectForGlyphAtIndex:(NSUInteger)glyphIndex effectiveRange:(nullable NSRangePointer)effectiveGlyphRange;
-(CGRect)lineFragmentUsedRectForGlyphAtIndex:(NSUInteger)glyphIndex effectiveRange:(nullable NSRangePointer)effectiveGlyphRange withoutAdditionalLayout:(BOOL)flag;
-(CGPoint)locationForGlyphAtIndex:(NSUInteger)glyphIndex;
-(BOOL)notShownAttributeForGlyphAtIndex:(NSUInteger)glyphIndex;
-(BOOL)drawsOutsideLineFragmentForGlyphAtIndex:(NSUInteger)glyphIndex;
-(NSRange)truncatedGlyphRangeInLineFragmentForGlyphAtIndex:(NSUInteger)glyphIndex;
-(NSRange)glyphRangeForCharacterRange:(NSRange)charRange actualCharacterRange:(nullable NSRangePointer)actualCharRange;
-(NSRange)characterRangeForGlyphRange:(NSRange)glyphRange actualGlyphRange:(nullable NSRangePointer)actualGlyphRange;
-(NSRange)glyphRangeForTextContainer:(id<MAITextContainerProtocol>)container;
-(NSRange)rangeOfNominallySpacedGlyphsContainingIndex:(NSUInteger)glyphIndex;
-(CGRect)boundingRectForGlyphRange:(NSRange)glyphRange inTextContainer:(id<MAITextContainerProtocol>)container;
-(NSRange)glyphRangeForBoundingRect:(CGRect)bounds inTextContainer:(id<MAITextContainerProtocol>)container;
-(NSRange)glyphRangeForBoundingRectWithoutAdditionalLayout:(CGRect)bounds inTextContainer:(id<MAITextContainerProtocol>)container;
-(NSUInteger)glyphIndexForPoint:(CGPoint)point inTextContainer:(id<MAITextContainerProtocol>)container fractionOfDistanceThroughGlyph:(nullable CGFloat*)partialFraction;
-(NSUInteger)glyphIndexForPoint:(CGPoint)point inTextContainer:(id<MAITextContainerProtocol>)container;
-(CGFloat)fractionOfDistanceThroughGlyphForPoint:(CGPoint)point inTextContainer:(id<MAITextContainerProtocol>)container;
-(NSUInteger)characterIndexForPoint:(CGPoint)point inTextContainer:(id<MAITextContainerProtocol>)container fractionOfDistanceBetweenInsertionPoints:(nullable CGFloat*)partialFraction;
-(NSUInteger)getLineFragmentInsertionPointsForCharacterAtIndex:(NSUInteger)charIndex alternatePositions:(BOOL)aFlag inDisplayOrder:(BOOL)dFlag positions:(nullable CGFloat*)positions characterIndexes:(nullable NSUInteger*)charIndexes;
-(void)enumerateLineFragmentsForGlyphRange:(NSRange)glyphRange usingBlock:(void (^)(CGRect rect, CGRect usedRect, MAITextContainer*textContainer, NSRange glyphRange, BOOL*stop))block;
-(void)enumerateEnclosingRectsForGlyphRange:(NSRange)glyphRange withinSelectedGlyphRange:(NSRange)selectedRange inTextContainer:(id<MAITextContainerProtocol>)textContainer usingBlock:(void (^)(CGRect rect, BOOL*stop))block;
-(void)drawBackgroundForGlyphRange:(NSRange)glyphsToShow atPoint:(CGPoint)origin;
-(void)drawGlyphsForGlyphRange:(NSRange)glyphsToShow atPoint:(CGPoint)origin;
-(void)fillBackgroundRectArray:(const CGRect*)rectArray count:(NSUInteger)rectCount forCharacterRange:(NSRange)charRange color:(id<MAIColorProtocol>)color;
-(void)drawUnderlineForGlyphRange:(NSRange)glyphRange underlineType:(MAIUnderlineStyle)underlineVal baselineOffset:(CGFloat)baselineOffset lineFragmentRect:(CGRect)lineRect lineFragmentGlyphRange:(NSRange)lineGlyphRange containerOrigin:(CGPoint)containerOrigin;
-(void)underlineGlyphRange:(NSRange)glyphRange underlineType:(MAIUnderlineStyle)underlineVal lineFragmentRect:(CGRect)lineRect lineFragmentGlyphRange:(NSRange)lineGlyphRange containerOrigin:(CGPoint)containerOrigin;
-(void)drawStrikethroughForGlyphRange:(NSRange)glyphRange strikethroughType:(MAIUnderlineStyle)strikethroughVal baselineOffset:(CGFloat)baselineOffset lineFragmentRect:(CGRect)lineRect lineFragmentGlyphRange:(NSRange)lineGlyphRange containerOrigin:(CGPoint)containerOrigin;
-(void)strikethroughGlyphRange:(NSRange)glyphRange strikethroughType:(MAIUnderlineStyle)strikethroughVal lineFragmentRect:(CGRect)lineRect lineFragmentGlyphRange:(NSRange)lineGlyphRange containerOrigin:(CGPoint)containerOrigin;
@property(nullable, setter=setTextStorage:, getter=textStorage) id<MAITextStorageProtocol> textStorage;
@property(readonly, getter=textContainers) NSArray<MAITextContainer*>* textContainers;
@property(nullable, setter=setDelegate:, getter=delegate) id <MAILayoutManagerDelegate> delegate;
@property(setter=setShowsInvisibleCharacters:, getter=showsInvisibleCharacters) BOOL showsInvisibleCharacters;
@property(setter=setShowsControlCharacters:, getter=showsControlCharacters) BOOL showsControlCharacters;
@property(setter=setUsesFontLeading:, getter=usesFontLeading) BOOL usesFontLeading;
@property(setter=setAllowsNonContiguousLayout:, getter=allowsNonContiguousLayout) BOOL allowsNonContiguousLayout;
@property(readonly, getter=hasNonContiguousLayout) BOOL hasNonContiguousLayout;
@property(readonly, getter=numberOfGlyphs) NSUInteger numberOfGlyphs;
@property(readonly, getter=extraLineFragmentRect) CGRect extraLineFragmentRect;
@property(readonly, getter=extraLineFragmentUsedRect) CGRect extraLineFragmentUsedRect;
@property(readonly, nullable, getter=extraLineFragmentTextContainer) id<MAITextContainerProtocol> extraLineFragmentTextContainer;

#if TARGET_OS_IPHONE
#else
#endif

@end

#if TARGET_OS_IPHONE
@interface MAILayoutManager : NSLayoutManager<MAILayoutManagerProtocol>
#else
@interface MAILayoutManager : NSLayoutManager<MAILayoutManagerProtocol>
#endif
@end

NS_ASSUME_NONNULL_END
