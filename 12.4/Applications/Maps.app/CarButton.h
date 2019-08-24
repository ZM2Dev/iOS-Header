//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "CarButton-Protocol.h"

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface CarButton : UIButton <CarButton>
{
    double _screenScale;
    _Bool _usesMinimumWidth;
    long long _carButtonCompositingStyle;
    long long _carButtonHighlightStyle;
    long long _carButtonSize;
    UIImage *_unmodifiedRegularStateImage;
    long long _displayedLightLevel;
    long long _carTextWeight;
    long long _interactionModel;
}

+ (void)getTopButtonBarGlyphNormalImage:(out id *)arg1 darkerImage:(out id *)arg2 disabledImage:(out id *)arg3 fromImage:(id)arg4 lightLevel:(long long)arg5 scale:(double)arg6;
@property(nonatomic) long long interactionModel; // @synthesize interactionModel=_interactionModel;
@property(nonatomic) long long carTextWeight; // @synthesize carTextWeight=_carTextWeight;
@property(nonatomic) long long displayedLightLevel; // @synthesize displayedLightLevel=_displayedLightLevel;
@property(retain, nonatomic) UIImage *unmodifiedRegularStateImage; // @synthesize unmodifiedRegularStateImage=_unmodifiedRegularStateImage;
@property(nonatomic) long long carButtonSize; // @synthesize carButtonSize=_carButtonSize;
@property(nonatomic) long long carButtonHighlightStyle; // @synthesize carButtonHighlightStyle=_carButtonHighlightStyle;
@property(nonatomic) long long carButtonCompositingStyle; // @synthesize carButtonCompositingStyle=_carButtonCompositingStyle;
@property(nonatomic) _Bool usesMinimumWidth; // @synthesize usesMinimumWidth=_usesMinimumWidth;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)_updateAttributedTitles;
- (void)_updateBackgroundColor;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)_updateImagesFromUnmodifiedRegularImage;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)attributedStringForTitle:(id)arg1 state:(unsigned long long)arg2;
- (id)_currentStyleAttributesForState:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
