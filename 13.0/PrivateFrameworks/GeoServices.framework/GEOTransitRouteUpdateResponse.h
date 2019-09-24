//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDDatasetABStatus, GEOTransitRouteUpdateConfiguration, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitRouteUpdateResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    struct GEOTimepoint _timepointUsed;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSData *_responseId;
    GEOTransitRouteUpdateConfiguration *_routeUpdateConfiguration;
    NSMutableArray *_routeUpdates;
    NSString *_transitDataVersion;
    int _status;
    struct {
        unsigned int has_timepointUsed:1;
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_datasetAbStatus:1;
        unsigned int read_responseId:1;
        unsigned int read_routeUpdateConfiguration:1;
        unsigned int read_routeUpdates:1;
        unsigned int read_transitDataVersion:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_timepointUsed:1;
        unsigned int wrote_datasetAbStatus:1;
        unsigned int wrote_responseId:1;
        unsigned int wrote_routeUpdateConfiguration:1;
        unsigned int wrote_routeUpdates:1;
        unsigned int wrote_transitDataVersion:1;
        unsigned int wrote_status:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)routeUpdateType;
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
@property(retain, nonatomic) NSString *transitDataVersion;
@property(readonly, nonatomic) _Bool hasTransitDataVersion;
- (void)_readTransitDataVersion;
@property(nonatomic) _Bool hasTimepointUsed;
@property(nonatomic) struct GEOTimepoint timepointUsed;
@property(retain, nonatomic) GEOTransitRouteUpdateConfiguration *routeUpdateConfiguration;
@property(readonly, nonatomic) _Bool hasRouteUpdateConfiguration;
- (void)_readRouteUpdateConfiguration;
@property(retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property(readonly, nonatomic) _Bool hasDatasetAbStatus;
- (void)_readDatasetAbStatus;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status;
@property(retain, nonatomic) NSData *responseId;
@property(readonly, nonatomic) _Bool hasResponseId;
- (void)_readResponseId;
- (id)routeUpdateAtIndex:(unsigned long long)arg1;
- (unsigned long long)routeUpdatesCount;
- (void)_addNoFlagsRouteUpdate:(id)arg1;
- (void)addRouteUpdate:(id)arg1;
- (void)clearRouteUpdates;
@property(retain, nonatomic) NSMutableArray *routeUpdates;
- (void)_readRouteUpdates;

@end
