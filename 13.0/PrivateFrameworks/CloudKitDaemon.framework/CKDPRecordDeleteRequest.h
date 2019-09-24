//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecordIdentifier, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordDeleteRequest : PBRequest <NSCopying>
{
    NSString *_etag;
    NSMutableArray *_pluginFields;
    NSMutableArray *_publicKeys;
    CKDPRecordIdentifier *_recordIdentifier;
    _Bool _participantKeyLost;
    struct {
        unsigned int participantKeyLost:1;
    } _has;
}

+ (Class)publicKeysType;
+ (Class)pluginFieldsType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *publicKeys; // @synthesize publicKeys=_publicKeys;
@property(nonatomic) _Bool participantKeyLost; // @synthesize participantKeyLost=_participantKeyLost;
@property(retain, nonatomic) NSMutableArray *pluginFields; // @synthesize pluginFields=_pluginFields;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)publicKeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)publicKeysCount;
- (void)addPublicKeys:(id)arg1;
- (void)clearPublicKeys;
@property(nonatomic) _Bool hasParticipantKeyLost;
- (id)pluginFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pluginFieldsCount;
- (void)addPluginFields:(id)arg1;
- (void)clearPluginFields;
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end
