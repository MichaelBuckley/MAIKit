#if TARGET_OS_IPHONE
@import UIKit;
#else
@import AppKit;
#endif

#import "MAIEnums.h"

#import "MAILayoutManagerDelegate.h"
#import "MAITextLayoutOrientationProvider.h"
#import "MAITextStorageDelegate.h"
#import "MAIApplicationDelegate.h"
#import "MAICollectionViewDelegate.h"
#import "MAIGestureRecognizerDelegate.h"
#import "MAITableViewDataSource.h"
#import "MAITableViewDelegate.h"
#import "MAITextFieldDelegate.h"
#import "MAITextInput.h"
#import "MAITextViewDelegate.h"
#import "MAIToolbarDelegate.h"

@class MAILayoutConstraint;
@class MAITextTab;
@class MAIParagraphStyle;
@class MAIMutableParagraphStyle;
@class MAIShadow;
@class MAITextAttachment;
@class MAITextContainer;
@class MAITextStorage;
@class MAIAccessibilityElement;
@class MAIApplication;
@class MAIBezierPath;
@class MAIButton;
@class MAICollectionView;
@class MAIColor;
@class MAIControl;
@class MAIDatePicker;
@class MAIDocument;
@class MAIEvent;
@class MAIFont;
@class MAIFontDescriptor;
@class MAIGestureRecognizer;
@class MAIImage;
@class MAIImageView;
@class MAIMenuItem;
@class MAINib;
@class MAIPanGestureRecognizer;
@class MAIPasteboard;
@class MAIPrinter;
@class MAIPrintInfo;
@class MAIResponder;
@class MAIRotationGestureRecognizer;
@class MAIScreen;
@class MAIScrollView;
@class MAISegmentedControl;
@class MAISlider;
@class MAISplitViewController;
@class MAIStepper;
@class MAIStoryboard;
@class MAIStoryboardSegue;
@class MAITableView;
@class MAITextField;
@class MAITextView;
@class MAIToolbar;
@class MAITouch;
@class MAIView;
@class MAIViewController;
@class MAIVisualEffectView;
@class MAIWindow;

@interface MAILayoutManager : NSObject<NSCoding>
-(void)addTextContainer:(MAITextContainer *)container;
-(void)insertTextContainer:(MAITextContainer *)container atIndex:(NSUInteger)index;
-(void)removeTextContainerAtIndex:(NSUInteger)index;
-(void)textContainerChangedGeometry:(MAITextContainer *)container;
-(void)invalidateGlyphsForCharacterRange:(NSRange)charRange changeInLength:(NSInteger)delta actualCharacterRange:(NSRangePointer)actualCharRange;
-(void)invalidateLayoutForCharacterRange:(NSRange)charRange actualCharacterRange:(NSRangePointer)actualCharRange;
-(void)invalidateDisplayForCharacterRange:(NSRange)charRange;
-(void)invalidateDisplayForGlyphRange:(NSRange)glyphRange;
-(void)ensureGlyphsForCharacterRange:(NSRange)charRange;
-(void)ensureGlyphsForGlyphRange:(NSRange)glyphRange;
-(void)ensureLayoutForCharacterRange:(NSRange)charRange;
-(void)ensureLayoutForGlyphRange:(NSRange)glyphRange;
-(void)ensureLayoutForTextContainer:(MAITextContainer *)container;
-(void)ensureLayoutForBoundingRect:(CGRect)bounds inTextContainer:(MAITextContainer *)container;
-(BOOL)isValidGlyphIndex:(NSUInteger)glyphIndex;
-(NSUInteger)characterIndexForGlyphAtIndex:(NSUInteger)glyphIndex;
-(NSUInteger)glyphIndexForCharacterAtIndex:(NSUInteger)charIndex;
-(void)setTextContainer:(MAITextContainer *)container forGlyphRange:(NSRange)glyphRange;
-(void)setLineFragmentRect:(CGRect)fragmentRect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)usedRect;
-(void)setExtraLineFragmentRect:(CGRect)fragmentRect usedRect:(CGRect)usedRect textContainer:(MAITextContainer *)container;
-(void)setLocation:(CGPoint)location forStartOfGlyphRange:(NSRange)glyphRange;
-(void)setNotShownAttribute:(BOOL)flag forGlyphAtIndex:(NSUInteger)glyphIndex;
-(void)setDrawsOutsideLineFragment:(BOOL)flag forGlyphAtIndex:(NSUInteger)glyphIndex;
-(void)setAttachmentSize:(CGSize)attachmentSize forGlyphRange:(NSRange)glyphRange;
-(void)getFirstUnlaidCharacterIndex:(NSUInteger *)charIndex glyphIndex:(NSUInteger *)glyphIndex;
-(MAITextContainer*)textContainerForGlyphAtIndex:(NSUInteger)glyphIndex effectiveRange:(NSRangePointer)effectiveGlyphRange;
-(CGRect)usedRectForTextContainer:(MAITextContainer *)container;
-(CGRect)lineFragmentRectForGlyphAtIndex:(NSUInteger)glyphIndex effectiveRange:(NSRangePointer)effectiveGlyphRange;
-(CGRect)lineFragmentUsedRectForGlyphAtIndex:(NSUInteger)glyphIndex effectiveRange:(NSRangePointer)effectiveGlyphRange;
-(CGPoint)locationForGlyphAtIndex:(NSUInteger)glyphIndex;
-(BOOL)notShownAttributeForGlyphAtIndex:(NSUInteger)glyphIndex;
-(BOOL)drawsOutsideLineFragmentForGlyphAtIndex:(NSUInteger)glyphIndex;
-(CGSize)attachmentSizeForGlyphAtIndex:(NSUInteger)glyphIndex;
-(NSRange)glyphRangeForCharacterRange:(NSRange)charRange actualCharacterRange:(NSRangePointer)actualCharRange;
-(NSRange)characterRangeForGlyphRange:(NSRange)glyphRange actualGlyphRange:(NSRangePointer)actualGlyphRange;
-(NSRange)glyphRangeForTextContainer:(MAITextContainer *)container;
-(NSRange)rangeOfNominallySpacedGlyphsContainingIndex:(NSUInteger)glyphIndex;
-(CGRect)boundingRectForGlyphRange:(NSRange)glyphRange inTextContainer:(MAITextContainer *)container;
-(NSRange)glyphRangeForBoundingRect:(CGRect)bounds inTextContainer:(MAITextContainer *)container;
-(NSRange)glyphRangeForBoundingRectWithoutAdditionalLayout:(CGRect)bounds inTextContainer:(MAITextContainer *)container;
-(NSUInteger)glyphIndexForPoint:(CGPoint)point inTextContainer:(MAITextContainer *)container fractionOfDistanceThroughGlyph:(CGFloat *)partialFraction;
-(NSUInteger)glyphIndexForPoint:(CGPoint)point inTextContainer:(MAITextContainer *)container;
-(CGFloat)fractionOfDistanceThroughGlyphForPoint:(CGPoint)point inTextContainer:(MAITextContainer *)container;
-(NSUInteger)characterIndexForPoint:(CGPoint)point inTextContainer:(MAITextContainer *)container fractionOfDistanceBetweenInsertionPoints:(CGFloat *)partialFraction;
-(NSUInteger)getLineFragmentInsertionPointsForCharacterAtIndex:(NSUInteger)charIndex alternatePositions:(BOOL)aFlag inDisplayOrder:(BOOL)dFlag positions:(CGFloat *)positions characterIndexes:(NSUInteger *)charIndexes;
@property(nonatomic, readwrite, assign) id<MAILayoutManagerDelegate> delegate;
@property(nonatomic, readonly, assign) BOOL hasNonContiguousLayout;
@property(nonatomic, readonly, assign) NSUInteger numberOfGlyphs;
@property(nonatomic, readonly, assign) CGRect extraLineFragmentRect;
@property(nonatomic, readonly, assign) CGRect extraLineFragmentUsedRect;
#if TARGET_OS_IPHONE
-(NSLayoutManager*) ios;
#else
-(NSLayoutManager*) mac;
#endif

@end

#if TARGET_OS_IPHONE
@interface NSLayoutManager (MAIConversion)
#else
@interface NSLayoutManager (MAIConversion)
#endif
-(MAILayoutManager*) mai;
@end
