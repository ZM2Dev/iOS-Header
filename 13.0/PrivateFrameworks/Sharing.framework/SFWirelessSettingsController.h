//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SFWirelessSettingsControllerDelegate;

@interface SFWirelessSettingsController : NSObject
{
    id _delegate;
    _Bool _wifiEnabled;
    _Bool _bluetoothEnabled;
    _Bool _deviceSupportsWAPI;
    _Bool _firstCallbackCompleted;
    _Bool _wirelessCarPlayEnabled;
    _Bool _wirelessAccessPointEnabled;
    struct __SFOperation *_information;
}

@property __weak id <SFWirelessSettingsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
@property(readonly, getter=isWirelessCarPlayEnabled) _Bool wirelessCarPlayEnabled;
@property(getter=isWirelessAccessPointEnabled) _Bool wirelessAccessPointEnabled;
@property(readonly) _Bool deviceSupportsWAPI;
@property(getter=isBluetoothEnabled) _Bool bluetoothEnabled;
@property(getter=isWifiEnabled) _Bool wifiEnabled;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;
- (id)init;

@end
