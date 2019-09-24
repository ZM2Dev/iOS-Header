//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitNamedItem-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOStyleAttributes, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitHall : PBCodable <GEOTransitNamedItem, NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_location;
    unsigned long long _muid;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    NSMutableArray *_zoomNames;
    unsigned int _hallIndex;
    unsigned int _stationIndex;
    struct {
        unsigned int has_muid:1;
        unsigned int has_hallIndex:1;
        unsigned int has_stationIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_location:1;
        unsigned int read_nameDisplayString:1;
        unsigned int read_styleAttributes:1;
        unsigned int read_zoomNames:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_location:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_nameDisplayString:1;
        unsigned int wrote_styleAttributes:1;
        unsigned int wrote_zoomNames:1;
        unsigned int wrote_hallIndex:1;
        unsigned int wrote_stationIndex:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)zoomNameType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *nameDisplayString;
@property(readonly, nonatomic) _Bool hasNameDisplayString;
- (void)_readNameDisplayString;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
- (void)_readStyleAttributes;
- (id)zoomNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)zoomNamesCount;
- (void)_addNoFlagsZoomName:(id)arg1;
- (void)addZoomName:(id)arg1;
- (void)clearZoomNames;
@property(retain, nonatomic) NSMutableArray *zoomNames;
- (void)_readZoomNames;
@property(retain, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) _Bool hasLocation;
- (void)_readLocation;
@property(nonatomic) _Bool hasStationIndex;
@property(nonatomic) unsigned int stationIndex;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
@property(nonatomic) _Bool hasHallIndex;
@property(nonatomic) unsigned int hallIndex;
- (id)identifier;
- (id)bestNameWithLocale:(out id *)arg1;
- (id)bestName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
