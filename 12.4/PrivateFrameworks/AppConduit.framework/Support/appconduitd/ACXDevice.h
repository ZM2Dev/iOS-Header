//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRDevice, NSHashTable, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ACXDevice : NSObject
{
    _Bool _isActivePairedDevice;
    _Bool _isConnected;
    _Bool _isTombstone;
    _Bool _syncingIsRestricted;
    NRDevice *_nrDevice;
    NSString *_idsDeviceIdentifier;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly) NSHashTable *observers; // @synthesize observers=_observers;
@property _Bool syncingIsRestricted; // @synthesize syncingIsRestricted=_syncingIsRestricted;
@property _Bool isTombstone; // @synthesize isTombstone=_isTombstone;
@property _Bool isConnected; // @synthesize isConnected=_isConnected;
@property _Bool isActivePairedDevice; // @synthesize isActivePairedDevice=_isActivePairedDevice;
@property(readonly) NSString *idsDeviceIdentifier; // @synthesize idsDeviceIdentifier=_idsDeviceIdentifier;
@property(readonly) NRDevice *nrDevice; // @synthesize nrDevice=_nrDevice;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly) int cpuSubtype;
@property(readonly) int cpuType;
@property(readonly) NSString *UUID;
@property(readonly) NSString *serialNumber;
@property(readonly) NSString *osBuildVersion;
@property(readonly) NSString *osVersion;
@property(readonly) NSString *productType;
@property(readonly) NSString *watchSize;
@property(readonly) NSString *model;
@property(readonly) _Bool isReachable;
- (_Bool)_onQueue_isReachable;
@property(readonly) _Bool supportsAppConduitSync;
@property(readonly) NSUUID *pairingID;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initForSimulatorWithNRDevice:(id)arg1;
- (id)init;

@end

