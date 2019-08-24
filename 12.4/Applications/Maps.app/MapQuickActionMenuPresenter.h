//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "QuickActionMenuPresenter.h"

@class MKMapView, SearchResultTableViewCell, TwoLinesTableViewCell, UIImageView, UIView, VKLabelMarker;
@protocol MKAnnotation, MapQuickActionMenuPresenterDelegate;

__attribute__((visibility("hidden")))
@interface MapQuickActionMenuPresenter : QuickActionMenuPresenter
{
    MKMapView *_mapView;
    UIView *_pressureGestureHitView;
    UIImageView *_imageSourceView;
    struct CGPoint _imageSourceViewCenter;
    _Bool _showImageSourceView;
    _Bool _gestureInCallout;
    double _sourceViewScale;
    SearchResultTableViewCell *_searchResultCell;
    TwoLinesTableViewCell *_transitCell;
    id <MKAnnotation> _annotation;
}

@property(retain, nonatomic) id <MKAnnotation> annotation; // @synthesize annotation=_annotation;
- (void).cxx_destruct;
- (id)anchorContentView;
- (void)_willBeginSystemProvidedDismissalOfAlertController:(id)arg1;
- (void)_didEndSystemProvidedPresentationOfAlertController:(id)arg1 wasSuccessful:(_Bool)arg2;
- (void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1;
- (void)_setGestureSourceViewForImageCenter:(struct CGPoint)arg1 image:(id)arg2;
- (void)_setGestureSourceViewForImageCenter:(struct CGPoint)arg1 attributes:(id)arg2;
- (void)_setGestureSourceViewForLabelMarker:(id)arg1;
- (_Bool)_isValidLabelMarkerForInitiatingOrbGesture:(id)arg1;
- (_Bool)_shouldBeginOrbGestureAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)reset;
- (void)dealloc;
- (id)initWithPresentingViewController:(id)arg1 inMapView:(id)arg2;
- (id)initWithPresentingViewController:(id)arg1 inView:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <MapQuickActionMenuPresenterDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) VKLabelMarker *labelMarker; // @dynamic labelMarker;

@end
