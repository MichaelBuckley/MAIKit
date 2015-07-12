# MAIKit

MAIKit (Mac and iOS Kit) is a framework for sharing code between OS X and iOS.

UIKit contains many classes which have counterparts in Appkit. These classes contain many, but not all of the same methods and properties. For example, UIColor and NSColor are nearly identical, but NSColor contains constructors for creating colors from calibrated and device values, which UIColor does not, and UIColor has a CIColor property, which NSColor does not.

Many projects use @compatibility_alias to alias UIColor to NSColor in order to share code between iOS and OS X apps. However, this approach has some drawbacks. One such drawback is that it is still possible to write and compile code that works on one platform but not the other. For example, the following code would compile for iOS, but not OS X.

```Swift
let ciColor = NSColor.blackColor().CIColor
```

Of course, this error would be easily caught the next time the code was compiled for OS X, but constantly compiling for both platforms slows down development. Furthermore, it takes longer to correct problems than to prevent them, and when working on a team, if the build error is not caught before it is committed, could prevent other team members from completing their work until it is fixed. The @compatibility_alias method also exposes platform-specific methods and properties to autocomplete, leaving to the developer the responsibility of remembering which APIs are available on both platforms, and which APIs are not.

MAIKit aims to prevent these problems, speeding up cross-platform development. It does so by defining protocols which contain the intersection of methods and properties of UIKit and AppKit classes. It also defines classes which implement these protocols, and can be used in both iOS and OS X code. These classes inherit from their UIKit and Appkit counterparts, and can be safely subclassed.

Continuing the NSColor example, MAIKit defines a class named MAIColor, and a protocol named MAIColorProtocol. The same pattern applies to all UIKit and AppKit classes.

When declaring variables, you will need to declare them as MAIKit-defined protocols in Swift, or as Objective-C objects conforming to those protocols. You cannot instantiate protocols, however, so you will need to initialize them using MAIKit-defined classes.

```Swift
let maiColor : MAIColorProtocol = MAIColor.blackColor()
let cgColor = maiColor.CGColor
```

```Objective-C
id<MAIColorProtocol> maiColor = [MAIColor blackColor];
CGColorRef cgColor = [maiColor CGColor];
```


## Examples

The MAIKit/Examples folder contains an example project which demonstrates how to subclass views and viewcontrollers and how to handle events in mostly cross-platform code.

If you wish to contribute additional examples, please open a pull request. I will be happy to include them.

## Versioning

MAIKit attempts to remain compatible with [semantic versioning](http://semver.org) by only introducing API-incompatible changes in major versions. Because iOS SDK versions are usually tied to Xcode versions, MAIKit's major version changes whenever Xcode's major or minor version changes. MAIKit's minor version corresponds to Xcode's patch version, and MAIKit's patch version is independant of Xcode's version.

For example, Xcode 7.0.0, which contains iOS SDK 9.0 and OS X SDK 10.10, corresponds to MAIKit versions 70.0.x. If MAIKit releases 3 versions total during Xcode 7.0.0's life, then MAIKit will be at 70.0.2. If Xcode 7.0.1 is then released with minor API changes, MAIKit will incorporate those changes in a version 70.1.0. When Xcode 7.1.0 is released, MAIKit's version will increase to 71.0.0.

During Xcode betas, MAIKit may introduce API-incompatible changes without increasing the major version number, because Xcode builds with the same version number may introduce API-breaking changes.

## Installation

### [Carthage](https://github.com/Carthage/Carthage) ###


Start by adding the following line to your [Cartfile](https://github.com/Carthage/Carthage/blob/master/Documentation/Artifacts.md#cartfile).
```
github "MichaelBuckley/MAIKit" ~> 70.0
```

Full instructions on installing dependencies with Carthage can be found in [Carthage's README](https://github.com/Carthage/Carthage#adding-frameworks-to-an-application).

### [CocoaPods](http://cocoapods.org) ###

Add the following line to your [Podfile](http://guides.cocoapods.org/using/the-podfile.html).

```ruby
pod 'MAIKit', '~> 70.0'
```
Then, run `pod update`.

## License

MAIKit is released under the [MIT license](http://opensource.org/licenses/MIT).
