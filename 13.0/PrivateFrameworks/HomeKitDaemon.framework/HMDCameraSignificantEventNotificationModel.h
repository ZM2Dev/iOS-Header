//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBModel.h>

@class CKAsset, HMBModelCloudReference, NSDate, NSDictionary, NSNumber;

@interface HMDCameraSignificantEventNotificationModel : HMBModel
{
}

+ (id)hmbExternalRecordType;
+ (id)hmbProperties;
- (id)createSignificantEvent;

// Remaining properties
@property(retain) HMBModelCloudReference *associatedClip; // @dynamic associatedClip;
@property(retain) NSNumber *confidenceLevel; // @dynamic confidenceLevel;
@property(retain) NSDate *dateOfOccurrence; // @dynamic dateOfOccurrence;
@property(retain) CKAsset *heroFrameAsset; // @dynamic heroFrameAsset;
@property(retain) NSDictionary *homePresenceByPairingIdentity; // @dynamic homePresenceByPairingIdentity;
@property(retain) NSNumber *significantEvent; // @dynamic significantEvent;
@property(retain) NSNumber *timeOffsetWithinClip; // @dynamic timeOffsetWithinClip;

@end

