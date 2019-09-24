//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemModule.h>

#import <HomeUI/HUCameraSettingsModule-Protocol.h>

@class HFCameraSmartDetectionCondition, HFConditionCollection, HFItemProvider, HFStaticItem, NSSet, NSString, UIViewController;

@interface HUCameraSmartDetectionSettingsModule : HFItemModule <HUCameraSettingsModule>
{
    NSSet *_itemProviders;
    NSSet *_cameraProfiles;
    HFConditionCollection *_conditionCollection;
    HFStaticItem *_anyMotionDetectedItem;
    HFStaticItem *_specificMotionDetectedItem;
    HFItemProvider *_motionDetectionSettingsItemProvider;
    HFItemProvider *_motionDetectionOffOnItemProvider;
    unsigned long long _settingsContext;
    HFCameraSmartDetectionCondition *_condition;
}

@property(retain, nonatomic) HFCameraSmartDetectionCondition *condition; // @synthesize condition=_condition;
@property(readonly, nonatomic) unsigned long long settingsContext; // @synthesize settingsContext=_settingsContext;
@property(readonly, nonatomic) HFItemProvider *motionDetectionOffOnItemProvider; // @synthesize motionDetectionOffOnItemProvider=_motionDetectionOffOnItemProvider;
@property(readonly, nonatomic) HFItemProvider *motionDetectionSettingsItemProvider; // @synthesize motionDetectionSettingsItemProvider=_motionDetectionSettingsItemProvider;
@property(retain, nonatomic) HFStaticItem *specificMotionDetectedItem; // @synthesize specificMotionDetectedItem=_specificMotionDetectedItem;
@property(retain, nonatomic) HFStaticItem *anyMotionDetectedItem; // @synthesize anyMotionDetectedItem=_anyMotionDetectedItem;
@property(readonly, nonatomic) HFConditionCollection *conditionCollection; // @synthesize conditionCollection=_conditionCollection;
@property(readonly, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
- (void)_dispatchUpdateForCameraProfile:(id)arg1;
- (id)_preferredConditionFromConditions:(id)arg1;
- (id)updateMotionDetectionSetting:(unsigned long long)arg1;
- (id)updateMotionDetectionSettingForItem:(id)arg1;
- (id)enableSmartMotion:(_Bool)arg1 forItem:(id)arg2;
- (id)didSelectItem:(id)arg1;
- (_Bool)isItemHeader:(id)arg1;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 conditionCollection:(id)arg3 settingsContext:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long displayStyle;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIViewController *presentingViewController;
@property(readonly) Class superclass;

@end
