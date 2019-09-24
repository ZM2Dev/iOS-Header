//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CarPlaySupport/CPSLinearFocusProviding-Protocol.h>

@class CPRouteChoice, CPSCardPlatterView, CPTrip, CPTripPreviewTextConfiguration, NSArray, NSString, UIButton;
@protocol CPSTripInitiating;

@interface CPSTripPreviewsCardView : UIView <CPSLinearFocusProviding>
{
    NSArray *_trips;
    CPTripPreviewTextConfiguration *_textConfiguration;
    CPTrip *_selectedTrip;
    CPRouteChoice *_selectedRouteChoice;
    CPSCardPlatterView *_platterView;
    id <CPSTripInitiating> _tripDelegate;
    UIButton *_goButton;
}

@property(readonly, nonatomic) UIButton *goButton; // @synthesize goButton=_goButton;
@property(readonly, nonatomic) __weak id <CPSTripInitiating> tripDelegate; // @synthesize tripDelegate=_tripDelegate;
@property(readonly, nonatomic) CPSCardPlatterView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic) __weak CPRouteChoice *selectedRouteChoice; // @synthesize selectedRouteChoice=_selectedRouteChoice;
@property(nonatomic) __weak CPTrip *selectedTrip; // @synthesize selectedTrip=_selectedTrip;
@property(retain, nonatomic) CPTripPreviewTextConfiguration *textConfiguration; // @synthesize textConfiguration=_textConfiguration;
@property(readonly, copy, nonatomic) NSArray *trips; // @synthesize trips=_trips;
- (void).cxx_destruct;
- (id)_linearFocusItems;
- (void)notifyDidSelectRouteChoice:(id)arg1;
- (void)startTripButtonPressed:(id)arg1;
- (void)updateEstimates:(id)arg1 forTripIdentifier:(id)arg2;
- (id)setupGoButton;
- (void)_updateButtonColors;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithTripDelegate:(id)arg1 trips:(id)arg2 textConfiguration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
