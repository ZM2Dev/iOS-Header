//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

@class MPMediaPickerController;

@interface MPRemoteMediaPickerController : _UIRemoteViewController
{
    MPMediaPickerController *_mediaPickerController;
}

+ (_Bool)shouldPropagateAppearanceCustomizations;
+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) __weak MPMediaPickerController *mediaPickerController; // @synthesize mediaPickerController=_mediaPickerController;
- (void).cxx_destruct;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
