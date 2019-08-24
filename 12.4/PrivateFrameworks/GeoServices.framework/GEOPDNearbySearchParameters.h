//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDNearbySearchParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _maxResults;
    int _sortOrder;
    GEOPDViewportInfo *_viewportInfo;
    struct {
        unsigned int maxResults:1;
        unsigned int sortOrder:1;
    } _has;
}

@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) unsigned int maxResults; // @synthesize maxResults=_maxResults;
- (int)StringAsSortOrder:(id)arg1;
- (id)sortOrderAsString:(int)arg1;
@property(nonatomic) _Bool hasSortOrder;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;

@end
