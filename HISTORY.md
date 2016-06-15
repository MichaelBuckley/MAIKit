# Version History

### 80.0.0 - 2016-06-14

* Updated to Xcode 8 Beta 1
 * Some methods and properties, including initializers, are no longer nullable
 * `gestureRecognizers` was added to `MAIControl` and its subclasses
 * `backgroundColor` was added to `MAIDatePicker`, `MAIScrollView`, `MAITableView`, `MAITableViewRowAction`, and `MAIWindow`
 * `view` was added to `MAIViewController` and `MAISplitViewController`
 * `dataSource` was added to `MAITableView`
 * `firstAnchor` and `secondAnchor` were added to `MAILayoutConstraint`
 * `hasAmbiguousLayout` was added to `MAILayoutGuide`
 * `NS_SWIFT_UNAVAILABLE` was added to `MAILayoutAttributeBaseline` and `MAILayoutFormatAlignAllBaseline`
 * `layoutManager`, `textStorage` and `linkTextAttributes` were added to `MAITextView`
 * `+colorWithDisplayP3Red:green:blue:alpha:` was added to `MAIColor`
 * `-application:userAcceptedCloudKitSharing:` was added to `MAIApplicationDelegate`
 * `sectionHeadersPinToVisibleBounds` and `sectionFootersPinToVisibleBounds` were added to `MAICollectionViewFlowLayout`
 * `indexPath` was added to `MAICollectionViewLayoutAttributes`
 * `indexPathBeforeUpdate` and `indexPathAfterUpdate` were added to `MAICollectionViewUpdateItem`
 * `calendar` was added to `MAIDatePicker`
 * `familyName` was added to `MAIFont`
 * `postscriptName` was added to `MAIFontDescriptor`
 * `action` was added to `MAIMenuItem`
 * `-initWithCoder:` was added to `MAIPrintInfo`
 * `title` was added to `MAITableViewRowAction`
 * Additional `__kindof` annotations
 * Some properties and methods are marked `__TVOS_PROHIBITED`
  * There are no common properties or methods between iOS and macOS marked `__WATCHOS_PROHIBITED`
 * `NS_NOESCAPE` was added to some block parameters


### 71.0.0 - 2015-09-13

* Updated to Xcode 7 Beta 1, which added many `__kindof` annotations

### 70.0.6 - 2015-09-13

* Updated to Xcode 7 GM, which introduced the following changes
 * Many nullability annotations were added
 * The `action` property was removed from `MAIMenuItem`, since is is nullable on OS X, but not on iOS
 * The `bezierPathByReversingPath` property was added to `MAIBezierPath`
 * The `viewLoaded` property was added to `MAIViewController` and `MAISplitViewController`
 * The `firstResponder` property was added to `MAICollectionView`
 * `numberOfSections` has been changed from a method to a property on `MAICollectionView`


### 70.0.5 — 2015-07-21

* Moved class and protocol declarations to their own header
* Updated to Xcode 7 Beta 4, which added the following method to MAILayoutManagerDelegate

```Objective-C
- (BOOL)layoutManager:(id<MAILayoutManagerProtocol>)layoutManager
shouldSetLineFragmentRect:(inout CGRect *)lineFragmentRect
lineFragmentUsedRect:(inout CGRect *)lineFragmentUsedRect
baselineOffset:(inout CGFloat *)baselineOffset
inTextContainer:(id<MAITextContainerProtocol>)textContainer
forGlyphRange:(NSRange)glyphRange
```

### 70.0.4 — 2015-07-12

* Initial public release
