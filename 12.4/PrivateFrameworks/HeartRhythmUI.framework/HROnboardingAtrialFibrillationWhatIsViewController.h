//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HeartRhythmUI/HROnboardingLeadingAlignedExplanationViewController.h>

@class HRVideoPlayerView;

@interface HROnboardingAtrialFibrillationWhatIsViewController : HROnboardingLeadingAlignedExplanationViewController
{
    HRVideoPlayerView *_videoPlayerView;
}

@property(retain, nonatomic) HRVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
- (void).cxx_destruct;
- (long long)stackedButtonViewLastButtonMode;
- (id)buttonTitleString;
- (id)bodyString;
- (id)titleString;
- (id)createHeroView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initForOnboarding:(_Bool)arg1;

@end
