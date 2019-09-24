//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HMAccessory;

@interface HUNearbyAccessoriesItemManager : HFItemManager
{
    HMAccessory *_primaryAccessory;
}

@property(retain, nonatomic) HMAccessory *primaryAccessory; // @synthesize primaryAccessory=_primaryAccessory;
- (void).cxx_destruct;
- (_Bool)_isAPreferredServiceType:(id)arg1;
- (_Bool)shouldHideItem:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (_Bool)_isServiceItemAssociatedWithPrimaryAccessory:(id)arg1;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (unsigned long long)_numberOfSections;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceProfileItem:(id)arg2;

@end
