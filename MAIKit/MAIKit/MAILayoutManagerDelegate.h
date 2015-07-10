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
@protocol MAIDataAssetProtocol;
@class MAILayoutXAxisAnchor;
@protocol MAILayoutXAxisAnchorProtocol;
@class MAILayoutYAxisAnchor;
@protocol MAILayoutYAxisAnchorProtocol;
@class MAILayoutDimension;
@protocol MAILayoutDimensionProtocol;
@class MAILayoutConstraint;
@protocol MAILayoutConstraintProtocol;
@class MAILayoutManager;
@protocol MAILayoutManagerProtocol;
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

@protocol MAILayoutManagerDelegate
@optional
-(NSUInteger)layoutManager:(id<MAILayoutManagerProtocol>)layoutManager shouldGenerateGlyphs:(const CGGlyph*)glyphs properties:(const MAIGlyphProperty*)props characterIndexes:(const NSUInteger*)charIndexes font:(id<MAIFontProtocol>)aFont forGlyphRange:(NSRange)glyphRange;
-(CGFloat)layoutManager:(id<MAILayoutManagerProtocol>)layoutManager lineSpacingAfterGlyphAtIndex:(NSUInteger)glyphIndex withProposedLineFragmentRect:(CGRect)rect;
-(CGFloat)layoutManager:(id<MAILayoutManagerProtocol>)layoutManager paragraphSpacingBeforeGlyphAtIndex:(NSUInteger)glyphIndex withProposedLineFragmentRect:(CGRect)rect;
-(CGFloat)layoutManager:(id<MAILayoutManagerProtocol>)layoutManager paragraphSpacingAfterGlyphAtIndex:(NSUInteger)glyphIndex withProposedLineFragmentRect:(CGRect)rect;
-(MAIControlCharacterAction)layoutManager:(id<MAILayoutManagerProtocol>)layoutManager shouldUseAction:(MAIControlCharacterAction)action forControlCharacterAtIndex:(NSUInteger)charIndex;
-(BOOL)layoutManager:(id<MAILayoutManagerProtocol>)layoutManager shouldBreakLineByWordBeforeCharacterAtIndex:(NSUInteger)charIndex;
-(BOOL)layoutManager:(id<MAILayoutManagerProtocol>)layoutManager shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(NSUInteger)charIndex;
-(CGRect)layoutManager:(id<MAILayoutManagerProtocol>)layoutManager boundingBoxForControlGlyphAtIndex:(NSUInteger)glyphIndex forTextContainer:(id<MAITextContainerProtocol>)textContainer proposedLineFragment:(CGRect)proposedRect glyphPosition:(CGPoint)glyphPosition characterIndex:(NSUInteger)charIndex;
-(void)layoutManagerDidInvalidateLayout:(id<MAILayoutManagerProtocol>)sender;
-(void)layoutManager:(id<MAILayoutManagerProtocol>)layoutManager didCompleteLayoutForTextContainer:(nullable id<MAITextContainerProtocol>)textContainer atEnd:(BOOL)layoutFinishedFlag;



@end

NS_ASSUME_NONNULL_END
