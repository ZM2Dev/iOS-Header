//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <HearingUI/HACCContentModule-Protocol.h>

@class BCBatteryDevice, HACCBatteryGroupView, NSNumberFormatter, NSString, UIImageView, UILabel;
@protocol HACCContentModuleDelegate;

@interface HACCStatusView : UIControl <HACCContentModule>
{
    NSNumberFormatter *_numberFormatter;
    unsigned long long module;
    id <HACCContentModuleDelegate> delegate;
    UILabel *_titleLabel;
    UIImageView *_iconView;
    HACCBatteryGroupView *_batteryView;
    BCBatteryDevice *_batteryDevice;
}

@property(retain, nonatomic) BCBatteryDevice *batteryDevice; // @synthesize batteryDevice=_batteryDevice;
@property(retain, nonatomic) HACCBatteryGroupView *batteryView; // @synthesize batteryView=_batteryView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HACCContentModuleDelegate> delegate; // @synthesize delegate;
@property(nonatomic) unsigned long long module; // @synthesize module;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)buttonTapped:(id)arg1;
- (_Bool)enabled;
- (id)contentValue;
- (void)updateValue;
- (id)_productIdentifierForBTDevice:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
