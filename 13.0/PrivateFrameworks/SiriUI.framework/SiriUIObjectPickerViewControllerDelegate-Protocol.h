//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class SAUIDomainObjectPickerSelection, SiriUIObjectPickerViewController, UIViewController;

@protocol SiriUIObjectPickerViewControllerDelegate <NSObject>
- (UIViewController *)viewControllerForPickerPresentation:(SiriUIObjectPickerViewController *)arg1;

@optional
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 didSelectObject:(SAUIDomainObjectPickerSelection *)arg2 fromPicker:(UIViewController *)arg3;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 didDismissPicker:(UIViewController *)arg2;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 willDismissPicker:(UIViewController *)arg2;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 willPresentPicker:(UIViewController *)arg2;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 shouldPresentPicker:(UIViewController *)arg2 completion:(void (^)(_Bool))arg3;
@end
