//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPlayMediaIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBMediaItemValue, _INPBTimestamp;

@interface _INPBPlayMediaIntent : PBCodable <_INPBPlayMediaIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int playShuffled:1;
        unsigned int playbackRepeatMode:1;
        unsigned int resumePlayback:1;
    } _has;
    _Bool _playShuffled;
    _Bool _resumePlayback;
    int _playbackRepeatMode;
    NSArray *_buckets;
    _INPBTimestamp *_expirationDate;
    _INPBIntentMetadata *_intentMetadata;
    _INPBMediaItemValue *_mediaContainer;
    NSArray *_mediaItems;
    NSString *_proxiedBundleIdentifier;
    NSString *_recoID;
}

+ (Class)mediaItemsType;
+ (Class)bucketType;
@property(nonatomic) _Bool resumePlayback; // @synthesize resumePlayback=_resumePlayback;
@property(copy, nonatomic) NSString *recoID; // @synthesize recoID=_recoID;
@property(copy, nonatomic) NSString *proxiedBundleIdentifier; // @synthesize proxiedBundleIdentifier=_proxiedBundleIdentifier;
@property(nonatomic) int playbackRepeatMode; // @synthesize playbackRepeatMode=_playbackRepeatMode;
@property(nonatomic) _Bool playShuffled; // @synthesize playShuffled=_playShuffled;
@property(copy, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) _INPBMediaItemValue *mediaContainer; // @synthesize mediaContainer=_mediaContainer;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBTimestamp *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSArray *buckets; // @synthesize buckets=_buckets;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasResumePlayback;
@property(readonly, nonatomic) _Bool hasRecoID;
@property(readonly, nonatomic) _Bool hasProxiedBundleIdentifier;
- (int)StringAsPlaybackRepeatMode:(id)arg1;
- (id)playbackRepeatModeAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaybackRepeatMode;
@property(nonatomic) _Bool hasPlayShuffled;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long mediaItemsCount;
- (void)addMediaItems:(id)arg1;
- (void)clearMediaItems;
@property(readonly, nonatomic) _Bool hasMediaContainer;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasExpirationDate;
- (id)bucketAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long bucketsCount;
- (void)addBucket:(id)arg1;
- (void)clearBuckets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
