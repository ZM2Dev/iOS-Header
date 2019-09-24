//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSValue;

@interface CRCarPlayCapabilities : NSObject
{
    _Bool _persisted;
    unsigned long long _disabledFeature;
    long long _nowPlayingAlbumArtMode;
    NSValue *_viewAreaInsets;
    NSValue *_dashboardRoundedCorners;
    long long _userInterfaceStyle;
}

+ (id)newCapabilitiesFromGlobalDomain;
+ (id)fetchCarCapabilities;
+ (void)setCapabilitiesIdentifier:(id)arg1;
+ (id)capabilitiesIdentifier;
@property(nonatomic) _Bool persisted; // @synthesize persisted=_persisted;
@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(retain, nonatomic) NSValue *dashboardRoundedCorners; // @synthesize dashboardRoundedCorners=_dashboardRoundedCorners;
@property(retain, nonatomic) NSValue *viewAreaInsets; // @synthesize viewAreaInsets=_viewAreaInsets;
@property(nonatomic) long long nowPlayingAlbumArtMode; // @synthesize nowPlayingAlbumArtMode=_nowPlayingAlbumArtMode;
@property(nonatomic) unsigned long long disabledFeature; // @synthesize disabledFeature=_disabledFeature;
- (void).cxx_destruct;
- (void)persistCapabilitiesToGlobalDomain;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCapabilities:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end
