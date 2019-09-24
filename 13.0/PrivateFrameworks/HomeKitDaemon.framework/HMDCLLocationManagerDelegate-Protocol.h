//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class CLRegion, NSArray, NSError;
@protocol HMDCLLocationManager;

@protocol HMDCLLocationManagerDelegate <NSObject>
- (void)locationManager:(id <HMDCLLocationManager>)arg1 didDetermineState:(long long)arg2 forRegion:(CLRegion *)arg3;
- (void)locationManager:(id <HMDCLLocationManager>)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id <HMDCLLocationManager>)arg1 didFailWithError:(NSError *)arg2;
- (void)locationManager:(id <HMDCLLocationManager>)arg1 didUpdateLocations:(NSArray *)arg2;
@end
