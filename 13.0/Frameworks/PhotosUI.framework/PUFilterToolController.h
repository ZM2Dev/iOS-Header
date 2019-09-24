//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotoEditToolController.h>

#import <PhotosUI/CEKSliderDelegate-Protocol.h>
#import <PhotosUI/CEKWheelScrubberViewDelegate-Protocol.h>

@class CEKBadgeTextView, CEKSlider, CEKWheelScrubberView, CIContext, CIImage, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface PUFilterToolController : PUPhotoEditToolController <CEKWheelScrubberViewDelegate, CEKSliderDelegate>
{
    CEKBadgeTextView *_filterBadgeView;
    CEKWheelScrubberView *_scrubberView;
    CEKSlider *_slider;
    _Bool _isSliderTouchDown;
    CIImage *_inputImage;
    _Bool _monitorAdjustmentsForCache;
    NSMutableDictionary *_filterThumbnailCache;
    NSMutableDictionary *_filterIntensityCache;
    NSMutableArray *_toolConstraints;
    NSMutableArray *_scrubberViewConstraints;
    NSMutableArray *_filterBadgeViewConstraints;
    NSLayoutConstraint *_filterBadgeWidthConstraint;
    NSLayoutConstraint *_filterBadgeHeightConstraint;
    NSNumberFormatter *_formatter;
    CIContext *_context;
    CDStruct_1b6d18a9 _thumbnailTime;
    CDUnknownBlockType _willLoadFilterThumbnails;
    CDUnknownBlockType _didFinishLoadingFilterThumbnails;
}

@property(copy, nonatomic) CDUnknownBlockType didFinishLoadingFilterThumbnails; // @synthesize didFinishLoadingFilterThumbnails=_didFinishLoadingFilterThumbnails;
@property(copy, nonatomic) CDUnknownBlockType willLoadFilterThumbnails; // @synthesize willLoadFilterThumbnails=_willLoadFilterThumbnails;
- (void).cxx_destruct;
- (void)sliderDidEndScrolling:(id)arg1;
- (void)sliderWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)sliderDidScroll:(id)arg1;
- (void)sliderWillBeginScrolling:(id)arg1;
- (void)_sliderDidEndScrolling;
- (void)_updateSelectionTextAnimate:(_Bool)arg1;
- (void)_updateIntensityForEffect:(id)arg1;
- (void)wheelScrubberViewDidEndScrolling:(id)arg1;
- (void)wheelScrubberViewWillBeginScrolling:(id)arg1;
- (void)wheelScrubberView:(id)arg1 updateCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)wheelScrubberViewDidChangeSelectedIndex:(id)arg1;
- (void)_updateFilterIntensityCache;
- (void)_setShowSlider:(_Bool)arg1 animate:(_Bool)arg2;
- (void)_updateBadgeAndSliderWithEffect:(id)arg1;
- (long long)_indexForFilterId:(id)arg1;
- (id)_effectForIndex:(long long)arg1;
- (double)_adjustedFilterIntensity;
- (id)_adjustedFilterName;
- (id)_effectAdjustment;
- (long long)_adjustedFilterIndex;
- (long long)toolControllerTag;
- (_Bool)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (_Bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (_Bool)wantsZoomAndPanEnabled;
- (id)centerToolbarView;
- (id)toolbarIcon;
- (id)localizedName;
- (void)_updateScrubberLayout;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)_updateBadgeConstraints;
- (void)_updateToolConstraints;
- (void)updateViewConstraints;
- (void)_setThumbnail:(id)arg1 forKey:(id)arg2;
- (void)_updateCacheWithCIImage:(id)arg1;
- (void)_prepareThumbnailImagesIfNeeded;
- (void)_updateWithCompositionController:(id)arg1;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didResignActiveTool;
- (void)willBecomeActiveTool;
- (void)viewDidLoad;
- (void)_setupSlider;
- (void)_setupFilters;
- (void)_setupScrubber;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
