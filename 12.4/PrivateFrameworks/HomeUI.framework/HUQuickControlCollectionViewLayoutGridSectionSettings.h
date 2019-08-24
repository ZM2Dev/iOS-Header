//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/NAIdentifiable-Protocol.h>
#import <HomeUI/NSCopying-Protocol.h>

@class NSString;

@interface HUQuickControlCollectionViewLayoutGridSectionSettings : NSObject <NSCopying, NAIdentifiable>
{
    double _rowSpacing;
    double _interitemSpacing;
    unsigned long long _preferredLayoutStyle;
    struct CGSize _preferredItemSize;
}

+ (id)na_identity;
@property(nonatomic) unsigned long long preferredLayoutStyle; // @synthesize preferredLayoutStyle=_preferredLayoutStyle;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double rowSpacing; // @synthesize rowSpacing=_rowSpacing;
@property(nonatomic) struct CGSize preferredItemSize; // @synthesize preferredItemSize=_preferredItemSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
