//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCornerGaugeTextView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerMeteredGaugeTextView : NTKRichComplicationCornerGaugeTextView
{
    NTKRichComplicationImageView *_outerImageView;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (long long)progressFillStyle;
@property(readonly, nonatomic) NTKRichComplicationImageView *outerImageView; // @synthesize outerImageView=_outerImageView;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)layoutSubviews;
- (id)init;

@end

