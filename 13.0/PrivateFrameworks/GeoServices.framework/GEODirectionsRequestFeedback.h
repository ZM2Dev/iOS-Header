//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEODirectionsRequestFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSString *_appIdentifier;
    NSString *_requestingAppId;
    int _purpose;
    int _source;
    struct {
        unsigned int has_purpose:1;
        unsigned int has_source:1;
        unsigned int read_unknownFields:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_requestingAppId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_appIdentifier:1;
        unsigned int wrote_requestingAppId:1;
        unsigned int wrote_purpose:1;
        unsigned int wrote_source:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *requestingAppId;
@property(readonly, nonatomic) _Bool hasRequestingAppId;
- (void)_readRequestingAppId;
@property(retain, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) _Bool hasAppIdentifier;
- (void)_readAppIdentifier;
- (int)StringAsSource:(id)arg1;
- (id)sourceAsString:(int)arg1;
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source;
- (int)StringAsPurpose:(id)arg1;
- (id)purposeAsString:(int)arg1;
@property(nonatomic) _Bool hasPurpose;
@property(nonatomic) int purpose;
- (id)initWithPurpose:(int)arg1 andSource:(int)arg2 andIdentifier:(id)arg3;
- (id)initWithPurpose:(int)arg1 andSource:(int)arg2;
- (id)initWithPurpose:(int)arg1;

@end
