//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeViewController.h"

#import "MKMapViewDelegate-Protocol.h"

@class MKMapCamera, MKMapView, NSArray, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView, UIVisualEffectView;
@protocol LocationRefinementViewControllerDelegate, MKMapViewDelegate;

__attribute__((visibility("hidden")))
@interface LocationRefinementViewController : MapsThemeViewController <MKMapViewDelegate>
{
    _Bool _needsInitialCameraPosition;
    _Bool _viewDidLoadComplete;
    _Bool _visible;
    id <LocationRefinementViewControllerDelegate> _delegate;
    MKMapView *_mapView;
    id <MKMapViewDelegate> _mapViewDelegate;
    UIView *_instructionsContainer;
    NSLayoutConstraint *_instructionsContainerBottomConstraint;
    UILabel *_instructionsLabel;
    NSArray *_mapViewConstraints;
    NSString *_instructionsText;
    NSLayoutConstraint *_userLocationButtonBottomConstraint;
    UIVisualEffectView *_snapToUserLocationContainerView;
    MKMapCamera *_initialCamera;
    UIButton *_snapToUserLocationButton;
    unsigned long long _crosshairType;
    UIImageView *_crosshairImageView;
    NSLayoutConstraint *_crosshairXConstraint;
    NSLayoutConstraint *_crosshairYConstraint;
    double _initialMapViewZoomLevel;
}

@property(nonatomic) double initialMapViewZoomLevel; // @synthesize initialMapViewZoomLevel=_initialMapViewZoomLevel;
@property(retain, nonatomic) NSLayoutConstraint *crosshairYConstraint; // @synthesize crosshairYConstraint=_crosshairYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *crosshairXConstraint; // @synthesize crosshairXConstraint=_crosshairXConstraint;
@property(retain, nonatomic) UIImageView *crosshairImageView; // @synthesize crosshairImageView=_crosshairImageView;
@property(readonly, nonatomic) unsigned long long crosshairType; // @synthesize crosshairType=_crosshairType;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool viewDidLoadComplete; // @synthesize viewDidLoadComplete=_viewDidLoadComplete;
@property(retain, nonatomic) UIButton *snapToUserLocationButton; // @synthesize snapToUserLocationButton=_snapToUserLocationButton;
@property(retain, nonatomic) MKMapCamera *initialCamera; // @synthesize initialCamera=_initialCamera;
@property(readonly, nonatomic) UIVisualEffectView *snapToUserLocationContainerView; // @synthesize snapToUserLocationContainerView=_snapToUserLocationContainerView;
@property(readonly, nonatomic) NSLayoutConstraint *userLocationButtonBottomConstraint; // @synthesize userLocationButtonBottomConstraint=_userLocationButtonBottomConstraint;
@property(copy, nonatomic) NSString *instructionsText; // @synthesize instructionsText=_instructionsText;
@property(retain, nonatomic) NSArray *mapViewConstraints; // @synthesize mapViewConstraints=_mapViewConstraints;
@property(readonly, nonatomic) UILabel *instructionsLabel; // @synthesize instructionsLabel=_instructionsLabel;
@property(readonly, nonatomic) NSLayoutConstraint *instructionsContainerBottomConstraint; // @synthesize instructionsContainerBottomConstraint=_instructionsContainerBottomConstraint;
@property(readonly, nonatomic) UIView *instructionsContainer; // @synthesize instructionsContainer=_instructionsContainer;
@property(nonatomic) _Bool needsInitialCameraPosition; // @synthesize needsInitialCameraPosition=_needsInitialCameraPosition;
@property(nonatomic) __weak id <MKMapViewDelegate> mapViewDelegate; // @synthesize mapViewDelegate=_mapViewDelegate;
@property(readonly, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <LocationRefinementViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)recenterMapView;
- (void)updateCrosshairConstraints;
- (void)setSelectedCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CLLocationCoordinate2D selectedCoordinate;
- (void)updateLocateMeButtonState;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)applyInitialZoomLevel;
- (void)applyInitialCameraPosition;
- (void)viewDidLayoutSubviews;
- (id)crosshairImage;
- (void)updateTheme;
- (void)_contentSizeChanged;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCamera:(id)arg1 crosshairType:(unsigned long long)arg2;
- (id)initWithCamera:(id)arg1 showCrosshair:(_Bool)arg2;
- (struct CGPoint)mapView:(id)arg1 focusPointForPoint:(struct CGPoint)arg2 gesture:(long long)arg3;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)delegateProtocolHasInstanceMethod:(SEL)arg1;
- (_Bool)protocol:(id)arg1 hasInstanceMethod:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
