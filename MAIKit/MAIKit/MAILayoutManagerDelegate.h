#if TARGET_OS_IPHONE
@import UIKit;
#else
@import AppKit;
#endif

#import "MAIEnums.h"

@protocol MAITextLayoutOrientationProvider;
@protocol MAITextAttachmentContainer;
@protocol MAITextStorageDelegate;
@protocol MAIApplicationDelegate;
@protocol MAICollectionViewDataSource;
@protocol MAICollectionViewDelegate;
@protocol MAICollectionViewDelegateFlowLayout;
@protocol MAIGestureRecognizerDelegate;
@protocol MAITableViewDataSource;
@protocol MAITableViewDelegate;
@protocol MAITextFieldDelegate;
@protocol MAITextInput;
@protocol MAITextViewDelegate;
@protocol MAIToolbarDelegate;

@class MAIDataAsset;
@class MAILayoutXAxisAnchor;
@class MAILayoutYAxisAnchor;
@class MAILayoutDimension;
@class MAILayoutConstraint;
@class MAILayoutManager;
@class MAITextTab;
@class MAIParagraphStyle;
@class MAIMutableParagraphStyle;
@class MAIShadow;
@class MAIStringDrawingContext;
@class MAITextAttachment;
@class MAITextContainer;
@class MAITextStorage;
@class MAIAccessibilityElement;
@class MAIApplication;
@class MAIBezierPath;
@class MAIButton;
@class MAICollectionView;
@class MAICollectionViewFlowLayoutInvalidationContext;
@class MAICollectionViewFlowLayout;
@class MAICollectionViewLayoutAttributes;
@class MAICollectionViewUpdateItem;
@class MAICollectionViewLayoutInvalidationContext;
@class MAICollectionViewLayout;
@class MAICollectionViewTransitionLayout;
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
@class MAILayoutGuide;
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
@class MAIStackView;
@class MAIStepper;
@class MAIStoryboard;
@class MAIStoryboardSegue;
@class MAITableViewRowAction;
@class MAITableView;
@class MAITextField;
@class MAITextView;
@class MAIToolbar;
@class MAITouch;
@class MAIView;
@class MAIViewController;
@class MAIVisualEffectView;
@class MAIWindow;

NS_ASSUME_NONNULL_BEGIN

@protocol MAILayoutManagerDelegate
-(NSUInteger)layoutManager:(MAILayoutManager*)layoutManager shouldGenerateGlyphs:(const CGGlyph*)glyphs properties:(const MAIGlyphProperty*)props characterIndexes:(const NSUInteger*)charIndexes font:(MAIFont*)aFont forGlyphRange:(NSRange)glyphRange;
-(CGFloat)layoutManager:(MAILayoutManager*)layoutManager lineSpacingAfterGlyphAtIndex:(NSUInteger)glyphIndex withProposedLineFragmentRect:(CGRect)rect;
-(CGFloat)layoutManager:(MAILayoutManager*)layoutManager paragraphSpacingBeforeGlyphAtIndex:(NSUInteger)glyphIndex withProposedLineFragmentRect:(CGRect)rect;
-(CGFloat)layoutManager:(MAILayoutManager*)layoutManager paragraphSpacingAfterGlyphAtIndex:(NSUInteger)glyphIndex withProposedLineFragmentRect:(CGRect)rect;
-(MAIControlCharacterAction)layoutManager:(MAILayoutManager*)layoutManager shouldUseAction:(MAIControlCharacterAction)action forControlCharacterAtIndex:(NSUInteger)charIndex;
-(BOOL)layoutManager:(MAILayoutManager*)layoutManager shouldBreakLineByWordBeforeCharacterAtIndex:(NSUInteger)charIndex;
-(BOOL)layoutManager:(MAILayoutManager*)layoutManager shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(NSUInteger)charIndex;
-(CGRect)layoutManager:(MAILayoutManager*)layoutManager boundingBoxForControlGlyphAtIndex:(NSUInteger)glyphIndex forTextContainer:(MAITextContainer*)textContainer proposedLineFragment:(CGRect)proposedRect glyphPosition:(CGPoint)glyphPosition characterIndex:(NSUInteger)charIndex;
-(void)layoutManagerDidInvalidateLayout:(MAILayoutManager*)sender;
-(void)layoutManager:(MAILayoutManager*)layoutManager didCompleteLayoutForTextContainer:(nullable MAITextContainer*)textContainer atEnd:(BOOL)layoutFinishedFlag;
-(void)layoutManager:(MAILayoutManager*)layoutManager textContainer:(MAITextContainer*)textContainer didChangeGeometryFromSize:(CGSize)oldSize;



@end

NS_ASSUME_NONNULL_END
