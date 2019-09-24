//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSString, PBDataReader;

@interface GEOLogMsgEventTransitAppLaunch : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    NSString *_bundleIdentifier;
    GEOLatLng *_destination;
    GEOLatLng *_source;
    double _timestamp;
    CDStruct_ea2c3af7 _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
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
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;
@property(retain, nonatomic) GEOLatLng *destination;
@property(readonly, nonatomic) _Bool hasDestination;
- (void)_readDestination;
@property(retain, nonatomic) GEOLatLng *source;
@property(readonly, nonatomic) _Bool hasSource;
- (void)_readSource;
@property(retain, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
- (void)_readBundleIdentifier;

@end
