//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMInstructionLabel.h>

@interface CAMPortraitModeInstructionLabel : CAMInstructionLabel
{
    long long _shallowDepthOfFieldStatus;
    long long _flashMode;
    unsigned long long _numberOfPeopleFound;
    long long _devicePosition;
    long long _lightingType;
}

+ (id)_textForShallowDepthOfFieldStatus:(long long)arg1 numberOfPeopleFound:(unsigned long long)arg2 flashMode:(long long)arg3 devicePosition:(long long)arg4 lightingType:(long long)arg5;
+ (_Bool)shouldDisplayInstructionForShallowDepthOfFieldStatus:(long long)arg1;
@property(nonatomic) long long lightingType; // @synthesize lightingType=_lightingType;
@property(nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
@property(nonatomic) unsigned long long numberOfPeopleFound; // @synthesize numberOfPeopleFound=_numberOfPeopleFound;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(nonatomic) long long shallowDepthOfFieldStatus; // @synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateTextWithPriorStatus:(long long)arg1;

@end
