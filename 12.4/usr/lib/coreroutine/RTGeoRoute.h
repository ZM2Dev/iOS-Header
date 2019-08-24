//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/RTCoreDataTransformable-Protocol.h>

@class GEORoute, NSDate, NSString, NSUUID;

@interface RTGeoRoute : NSObject <RTCoreDataTransformable>
{
    GEORoute *_geoRoute;
    NSUUID *_identifier;
    NSUUID *_originLocationOfInterestIdentifier;
    NSUUID *_destinationLocationOfInterestIdentifier;
    NSDate *_creationDate;
}

@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSUUID *destinationLocationOfInterestIdentifier; // @synthesize destinationLocationOfInterestIdentifier=_destinationLocationOfInterestIdentifier;
@property(readonly, nonatomic) NSUUID *originLocationOfInterestIdentifier; // @synthesize originLocationOfInterestIdentifier=_originLocationOfInterestIdentifier;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) GEORoute *geoRoute; // @synthesize geoRoute=_geoRoute;
- (void).cxx_destruct;
- (id)initWithGEORoute:(id)arg1 identifier:(id)arg2 originLocationOfInterestIdentifier:(id)arg3 destinationLocationOfInterestIdentifier:(id)arg4 creationDate:(id)arg5;
- (id)initWithGEORoute:(id)arg1 originLocationOfInterestIdentifier:(id)arg2 destinationLocationOfInterestIdentifier:(id)arg3;
- (id)managedObjectWithContext:(id)arg1;
- (id)initWithGeoRouteMO:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
