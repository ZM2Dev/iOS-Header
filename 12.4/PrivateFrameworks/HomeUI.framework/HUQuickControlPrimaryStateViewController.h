//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFControlItem;
@protocol HFPrimaryStateWriter;

@interface HUQuickControlPrimaryStateViewController : HUQuickControlSingleControlViewController
{
}

+ (Class)controlItemClass;
+ (id)controlItemPredicate;
- (id)controlToViewValueTransformer;
- (id)createViewProfile;
- (id)createInteractionCoordinator;

// Remaining properties
@property(readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *controlItem; // @dynamic controlItem;

@end
