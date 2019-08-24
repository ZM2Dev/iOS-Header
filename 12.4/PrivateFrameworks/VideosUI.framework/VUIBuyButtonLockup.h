//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIUIStackView.h>

@class NSLayoutConstraint, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface VUIBuyButtonLockup : VUIUIStackView
{
    UILabel *_iAPLabel;
    UIButton *_button;
    NSLayoutConstraint *_buttonHeightConstraint;
    long long _lastOrientation;
    _Bool _hasIAP;
}

@property(nonatomic) _Bool hasIAP; // @synthesize hasIAP=_hasIAP;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)_updateForPreferredContentSize;
- (_Bool)_isLargeContentSize;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
