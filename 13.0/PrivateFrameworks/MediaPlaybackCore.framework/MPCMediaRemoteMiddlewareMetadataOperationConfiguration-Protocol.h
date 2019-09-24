//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPCPlayerPath, MPPropertySet, NSString;

@protocol MPCMediaRemoteMiddlewareMetadataOperationConfiguration <NSObject>
@property(readonly, nonatomic) MPPropertySet *queueSectionProperties;
@property(readonly, nonatomic) MPPropertySet *queueItemProperties;
@property(readonly, nonatomic) MPPropertySet *playingItemProperties;
@property(readonly) CDStruct_339ad95e tracklistRange;
@property(readonly, nonatomic) MPCPlayerPath *playerPath;

@optional
@property(readonly, nonatomic) NSString *preferredFallbackItemRelationship;
@end
