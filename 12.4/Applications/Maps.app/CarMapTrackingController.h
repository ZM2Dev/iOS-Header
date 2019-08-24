//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKUserTrackingView-Protocol.h"

@class MKMapView, NSString;
@protocol CarMapTrackingControllerDelegate;

__attribute__((visibility("hidden")))
@interface CarMapTrackingController : NSObject <MKUserTrackingView>
{
    _Bool _useForcedTrackingMode;
    MKMapView *_mapView;
    long long _forcedTrackingMode;
    id <CarMapTrackingControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <CarMapTrackingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long forcedTrackingMode; // @synthesize forcedTrackingMode=_forcedTrackingMode;
@property(nonatomic) _Bool useForcedTrackingMode; // @synthesize useForcedTrackingMode=_useForcedTrackingMode;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (_Bool)hasRenderedSomething;
- (_Bool)isCurrentlyRotated;
- (_Bool)canRotateForHeading;
- (_Bool)hasUserLocation;
- (void)_setUserTrackingMode:(long long)arg1 animated:(_Bool)arg2 fromTrackingButton:(_Bool)arg3;
- (long long)userTrackingMode;
- (void)_mapViewNotified:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
