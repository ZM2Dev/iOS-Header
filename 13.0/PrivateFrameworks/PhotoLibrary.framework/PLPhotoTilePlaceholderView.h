//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotoLibrary/PLTilePlaceholderView-Protocol.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface PLPhotoTilePlaceholderView : UIView <PLTilePlaceholderView>
{
    UIActivityIndicatorView *_loadingIndicatorView;
    UILabel *_loadingLabel;
    UIView *_loadingContainerView;
    double _lastViewPhaseChangeDate;
    _Bool _indicatorIsVisible;
}

- (void)layoutSubviews;
- (void)setImageRect:(struct CGRect)arg1;
- (void)setToolbarVisible:(_Bool)arg1;
- (void)showLoadingIndicator;
- (void)showErrorIndicator;
- (void)showLoadingIndicatorWhenReady;
- (void)updateCloudDownloadProgress:(double)arg1;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
