//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessoryProfile.h>

@interface HMDNetworkRouterSatelliteProfile : HMDAccessoryProfile
{
    unsigned long long _networkStatus;
    long long _satelliteStatus;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property(nonatomic) long long satelliteStatus; // @synthesize satelliteStatus=_satelliteStatus;
@property(nonatomic) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)encodeWithCoder:(id)arg1;
- (void)handleAccessoryIsReachable:(id)arg1;
- (void)__handleAccessoryIsReachable;
- (void)handleCharacteristicValuesChanged:(id)arg1;
- (void)_handleCharacteristicChanges:(id)arg1;
- (void)__updateSatelliteStatus:(id)arg1;
- (void)_updateNetworkStatus;
- (void)__notifyClientsOfNetworkStatusUpdate:(unsigned long long)arg1;
- (void)handleInitialState;
- (void)registerForMessages;
- (void)_registerForNotifications;
- (id)runtimeState;
- (void)dealloc;
- (void)unconfigure;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRouterSatelliteService:(id)arg1 msgDispatcher:(id)arg2;

@end

