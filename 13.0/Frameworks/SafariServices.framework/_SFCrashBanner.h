//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel, _UIBackdropView;

@interface _SFCrashBanner : UIView
{
    _UIBackdropView *_backdrop;
    UIImageView *_closeButtonOverlayImageView;
    UILabel *_label;
    UIView *_separator;
    UIView *_separatorOverlay;
    struct CGSize _cachedLabelLayoutSize;
    _Bool _usesLightControls;
    UIButton *_closeButton;
}

@property(readonly, nonatomic) _Bool usesLightControls; // @synthesize usesLightControls=_usesLightControls;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_layoutCloseButton;
- (struct CGSize)_labelLayoutSizeForWidth:(double)arg1;
- (_Bool)_shouldUseManuallyWrappedCrashMessageForWidth:(double)arg1;
@property(copy, nonatomic) NSString *backdropGroupName;
- (id)initUsingLightControls:(_Bool)arg1;

@end
