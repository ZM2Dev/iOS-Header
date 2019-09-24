//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/ICQBannerViewDelegate-Protocol.h>

@class ICQOffer, NSString, UIView;
@protocol OS_dispatch_queue, PXCloudQuotaControllerDelegate;

@interface PXCloudQuotaController : NSObject <ICQBannerViewDelegate>
{
    ICQOffer *_currentOffer;
    NSObject<OS_dispatch_queue> *_queue;
    UIView *_informationBanner;
    id <PXCloudQuotaControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <PXCloudQuotaControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *informationBanner; // @synthesize informationBanner=_informationBanner;
- (void).cxx_destruct;
- (id)presentingViewControllerForBannerView:(id)arg1;
- (void)_currentOfferChangedNotification:(id)arg1;
- (void)_queue_getCurrentOffer;
- (void)_updateCurrentOffer:(id)arg1;
- (void)_queue_initialSetup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
