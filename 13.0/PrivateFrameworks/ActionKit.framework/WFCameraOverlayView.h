//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImagePickerController, UILabel, WFCameraFlashButton, WFCameraShutterButton, WFVolumeButtonManager;

@interface WFCameraOverlayView : UIView
{
    UIImagePickerController *_pickerController;
    WFCameraShutterButton *_shutterButton;
    long long _takenPhotos;
    long long _totalPhotos;
    WFCameraFlashButton *_flashButton;
    UIView *_flashView;
    UIButton *_flipButton;
    UILabel *_photosLabel;
    WFVolumeButtonManager *_volumeButtonManager;
}

@property(retain, nonatomic) WFVolumeButtonManager *volumeButtonManager; // @synthesize volumeButtonManager=_volumeButtonManager;
@property(nonatomic) __weak UILabel *photosLabel; // @synthesize photosLabel=_photosLabel;
@property(nonatomic) __weak UIButton *flipButton; // @synthesize flipButton=_flipButton;
@property(nonatomic) __weak UIView *flashView; // @synthesize flashView=_flashView;
@property(nonatomic) __weak WFCameraFlashButton *flashButton; // @synthesize flashButton=_flashButton;
@property(nonatomic) long long totalPhotos; // @synthesize totalPhotos=_totalPhotos;
@property(nonatomic) long long takenPhotos; // @synthesize takenPhotos=_takenPhotos;
@property(nonatomic) __weak WFCameraShutterButton *shutterButton; // @synthesize shutterButton=_shutterButton;
@property(nonatomic) __weak UIImagePickerController *pickerController; // @synthesize pickerController=_pickerController;
- (void).cxx_destruct;
- (void)updateButtons;
- (void)updateFlipButton;
- (void)flashValueChanged;
- (void)cancelPressed;
- (void)flipPressed;
- (void)updatePhotosLabel;
- (void)shutterPressed;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
