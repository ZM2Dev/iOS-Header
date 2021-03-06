//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMAccessory.h>

@class HMResidentDevice, NSArray, NSSet, NSString;

@interface HMAccessory (HFAdditions)
@property(readonly, copy, nonatomic) NSString *hf_defaultName;
@property(readonly, nonatomic) NSString *hf_editingName;
@property(readonly, nonatomic) _Bool hf_needsReprovisioningCheck;
@property(readonly, nonatomic) HMAccessory *hf_owningBridgeAccessory;
@property(readonly, nonatomic) NSArray *hf_bridgedAccessories;
@property(readonly, nonatomic) NSSet *hf_servicesBehindBridge;
@property(readonly, nonatomic) NSSet *hf_programmableSwitchNamespaceServices;
- (id)hf_serviceOfType:(id)arg1;
@property(readonly, nonatomic) unsigned long long hf_numberOfProgrammableSwitches;
@property(readonly, nonatomic) long long hf_appPunchOutReason;
@property(readonly, copy, nonatomic) NSSet *hf_displayNamesForVisibleTiles;
@property(readonly, copy, nonatomic) NSSet *hf_componentServices;
@property(readonly, copy, nonatomic) NSSet *hf_visibleServices;
@property(readonly, copy, nonatomic) NSSet *hf_standardServices;
@property(readonly, nonatomic) HMResidentDevice *hf_linkedResidentDevice;
@property(readonly, nonatomic) _Bool hf_isRemoteControl;
@property(readonly, nonatomic) _Bool hf_isProgrammableSwitch;
@property(readonly, nonatomic) _Bool hf_isCamera;
@property(readonly, nonatomic) _Bool hf_isVisibleAsBridge;
@property(readonly, nonatomic) _Bool hf_isBridge;
@property(readonly, nonatomic) _Bool hf_requiresFirmwareUpdate;
@end

