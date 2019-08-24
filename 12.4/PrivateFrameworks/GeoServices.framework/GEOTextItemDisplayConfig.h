//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTextItemDisplayConfig-Protocol.h>

@interface GEOTextItemDisplayConfig : NSObject <GEOTextItemDisplayConfig>
{
    unsigned int _maxItemsPerRow;
    unsigned int _maxRowCount;
}

@property(readonly, nonatomic) unsigned int maxRowCount; // @synthesize maxRowCount=_maxRowCount;
@property(readonly, nonatomic) unsigned int maxItemsPerRow; // @synthesize maxItemsPerRow=_maxItemsPerRow;
- (id)initWithTextItemDisplayConfig:(id)arg1;
- (id)initWithMaxItemsPerRow:(unsigned int)arg1 maxRowCount:(unsigned int)arg2;

@end
