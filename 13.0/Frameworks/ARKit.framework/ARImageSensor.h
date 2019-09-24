//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARSensor-Protocol.h>
#import <ARKit/AVCaptureDataOutputSynchronizerDelegate-Protocol.h>
#import <ARKit/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>

@class ARImageSensorSettings, AVCaptureConnection, AVCaptureDataOutputSynchronizer, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVisionDataOutput, NSArray, NSMutableArray, NSString;
@protocol ARSensorDelegate, OS_dispatch_queue;

@interface ARImageSensor : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureDataOutputSynchronizerDelegate, ARSensor>
{
    AVCaptureVisionDataOutput *_visionDataOutput;
    NSArray *_captureDeviceKeysObserved;
    _Bool _runningSingleShotAutoFocus;
    float _defaultLensPosition;
    ARImageSensorSettings *_settings;
    id <ARSensorDelegate> _delegate;
    AVCaptureDevice *_captureDevice;
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_videoInput;
    AVCaptureVideoDataOutput *_videoOutput;
    AVCaptureConnection *_videoConnection;
    AVCaptureConnection *_visionDataConnection;
    AVCaptureDataOutputSynchronizer *_outputSynchronizer;
    NSObject<OS_dispatch_queue> *_captureQueue;
    unsigned long long _powerUsage;
    long long _captureFramesPerSecond;
    NSMutableArray *_connections;
}

+ (void)registerSignPostForImageData:(id)arg1;
+ (float)defaultLensPosition;
@property _Bool runningSingleShotAutoFocus; // @synthesize runningSingleShotAutoFocus=_runningSingleShotAutoFocus;
@property float defaultLensPosition; // @synthesize defaultLensPosition=_defaultLensPosition;
@property(retain) NSMutableArray *connections; // @synthesize connections=_connections;
@property long long captureFramesPerSecond; // @synthesize captureFramesPerSecond=_captureFramesPerSecond;
@property(nonatomic) unsigned long long powerUsage; // @synthesize powerUsage=_powerUsage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *captureQueue; // @synthesize captureQueue=_captureQueue;
@property(readonly, nonatomic) AVCaptureDataOutputSynchronizer *outputSynchronizer; // @synthesize outputSynchronizer=_outputSynchronizer;
@property(readonly, nonatomic) AVCaptureConnection *visionDataConnection; // @synthesize visionDataConnection=_visionDataConnection;
@property(readonly, nonatomic) AVCaptureConnection *videoConnection; // @synthesize videoConnection=_videoConnection;
@property(readonly, nonatomic) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(readonly, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(readonly, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(readonly, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(nonatomic) __weak id <ARSensorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dispatchImageData:(id)arg1;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)_configureVisionDataOutputForSession:(id)arg1;
- (void)enableAutoFocusForDevice:(id)arg1;
- (void)configureGeometricDistortionCorrectionForDevice:(id)arg1;
- (void)_configureImageControlModeForDevice:(id)arg1;
- (void)_configureCameraFocusForDevice:(id)arg1;
- (void)_configureCameraWhiteBalanceForDevice:(id)arg1;
- (void)_configureCameraExposureForDevice:(id)arg1;
- (void)_configureFrameRateForDevice:(id)arg1 frameRate:(double)arg2;
- (void)_configureFrameRateForDevice:(id)arg1;
- (id)_setActiveFormat;
- (void)updateCaptureDeviceFrameRate:(double)arg1;
- (void)configureCaptureDevice;
- (id)configureCaptureSession;
- (void)enableSensor:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)forceUpdatePowerUsage:(unsigned long long)arg1;
- (void)start;
- (void)stop;
- (id)prepareToStart;
- (unsigned long long)providedDataTypes;
- (void)triggerVisionDataBurst;
- (id)logPrefix;
- (void)reconfigure:(id)arg1;
- (_Bool)canReconfigure:(id)arg1;
@property(readonly, nonatomic) NSArray *outputsForSynchronizer;
@property(readonly, copy, nonatomic) ARImageSensorSettings *settings; // @synthesize settings=_settings;
- (void)dealloc;
- (id)init;
- (id)initWithSettings:(id)arg1 captureSession:(id)arg2 captureQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
