//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKAccountServiceAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKDiscoveryDataSourceDelegate-Protocol.h>
#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>
#import <PassKitUI/PKGroupsControllerDelegate-Protocol.h>
#import <PassKitUI/PKPGSVFooterViewDelegate-Protocol.h>
#import <PassKitUI/PKPGSVSectionHeaderViewDelegate-Protocol.h>
#import <PassKitUI/PKPGSVSectionSubheaderDelegate-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDatasource-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDelegate-Protocol.h>
#import <PassKitUI/PKPassPersonalizationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPerformActionViewControllerDelegate-Protocol.h>
#import <PassKitUI/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSTimer, PKAccountServiceAccountResolutionController, PKDiscoveryDataSource, PKDiscoveryGalleryView, PKGroupsController, PKPassGroupStackView, PKPaymentService, PKPeerPaymentAccountResolutionController, PKPeerPaymentService, _UIBackdropView;
@protocol PKPassLibraryDataProvider;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPaymentServiceDelegate, PKPaymentSetupDelegate, PKPerformActionViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKDiscoveryDataSourceDelegate, PKPGSVFooterViewDelegate, PKPGSVSectionSubheaderDelegate, PKPGSVSectionHeaderViewDelegate, PKPassPersonalizationViewControllerDelegate>
{
    long long _backdropStyle;
    long long _invalidationStatus;
    PKPassGroupStackView *_groupStackView;
    _UIBackdropView *_headerBackground;
    _UIBackdropView *_footerBackground;
    PKPaymentService *_paymentService;
    unsigned long long _modalCardIndex;
    long long _presentationState;
    NSTimer *_allowDimmingTimer;
    NSTimer *_passViewedNotificationTimer;
    NSMutableArray *_blocksQueuedForUpdateCompletion;
    NSArray *_passUniqueIDsToExcludeFromFiltering;
    _Bool _persistentCardEmulationQueued;
    _Bool _viewAppeared;
    _Bool _viewAppearedBefore;
    _Bool _passesAreOutdated;
    _Bool _reloadingPasses;
    _Bool _backgroundMode;
    _Bool _inFailForward;
    _Bool _updatingBackdropSettings;
    CDStruct_6c46ada8 _headerBackgroundVisibility;
    CDStruct_6c46ada8 _footerBackgroundVisibility;
    unsigned long long _instanceFooterSuppressionCounter;
    int _expressTransactionNotificationObserver;
    id <PKPassLibraryDataProvider> _passLibraryDataProvider;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    PKAccountServiceAccountResolutionController *_accountServiceAccountResolutionController;
    PKDiscoveryDataSource *_discoveryDataSource;
    _Bool _inField;
    _Bool _handleFieldDetection;
    _Bool _welcomeStateEnabled;
    _Bool _externalModalPresentationAllowed;
    long long _style;
    PKGroupsController *_groupsController;
    unsigned long long _suppressedContent;
    PKDiscoveryGalleryView *_discoveryGalleryView;
}

+ (void)endSuppressingFooter;
+ (void)beginSuppressingFooter;
+ (void)endTrackingAction;
+ (void)beginTrackingAction;
+ (_Bool)isPerformingAction;
@property(readonly, nonatomic) __weak PKDiscoveryGalleryView *discoveryGalleryView; // @synthesize discoveryGalleryView=_discoveryGalleryView;
@property(nonatomic, getter=isExternalModalPresentationAllowed) _Bool externalModalPresentationAllowed; // @synthesize externalModalPresentationAllowed=_externalModalPresentationAllowed;
@property(nonatomic, getter=isWelcomeStateEnabled) _Bool welcomeStateEnabled; // @synthesize welcomeStateEnabled=_welcomeStateEnabled;
@property _Bool handleFieldDetection; // @synthesize handleFieldDetection=_handleFieldDetection;
@property _Bool passesAreOutdated; // @synthesize passesAreOutdated=_passesAreOutdated;
@property(nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property(readonly, nonatomic) PKGroupsController *groupsController; // @synthesize groupsController=_groupsController;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)presentPassDetailsForHeaderView:(id)arg1;
- (id)passForSectionHeaderView:(id)arg1;
- (void)transitionToViewController:(id)arg1;
- (void)shouldUpdateSectionSubheaderView:(id)arg1;
- (void)discoveryDataSource:(id)arg1 didUpdateArticleLayouts:(id)arg2;
- (void)paymentSetupDidFinish:(id)arg1;
- (_Bool)_canPerformExternalModalPresentation;
- (void)_updateBackdropSettings;
- (void)updateRegionSupportIfNecessary;
- (void)_accessibilitySettingsDidChange:(id)arg1;
- (void)_handleFooterSupressionChange:(id)arg1;
- (void)_regionConfigurationDidChangeNotification;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)_handleChildViewControllerRequestingServiceMode:(id)arg1;
- (void)_handleExpressNotification;
- (void)_registerForExpressTransactionNotifications:(_Bool)arg1;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1;
- (void)_updatePeerPaymentAccount;
- (void)_warnFailForward;
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg1;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1;
- (id)_passFromGroupsControllerWithUniqueIdentifier:(id)arg1;
- (void)_updateFooterSuppressionWithContext:(id)arg1;
- (void)_updateFooterSuppressionAnimated:(_Bool)arg1;
- (void)_endSuppressingInstanceFooterWithContext:(id)arg1;
- (void)_beginSuppressingInstanceFooter;
- (id)_appleCardUpsellAlertWithAccount:(id)arg1;
- (void)_resetToRootAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissPresentedVCsWithRequirements:(unsigned long long)arg1 animated:(_Bool)arg2 performAction:(CDUnknownBlockType)arg3;
- (void)_applyPresentationState;
- (void)_presentWithUpdatedPasses:(CDUnknownBlockType)arg1;
- (void)_handleProvisioningError:(id)arg1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (void)presentPaymentSetupController;
- (void)_presentAddPassesControllerWithPasses:(id)arg1;
- (id)_passPendingActivationToPresent;
- (id)_peerPaymentAccountResolutionController;
- (void)presentAutomaticPresentationControllerForPassWithUniqueID:(id)arg1;
- (void)addSimulatorPassWithURL:(id)arg1;
- (void)addVASPassWithIdentifier:(id)arg1;
- (void)startPaymentPreflight:(id)arg1 withPaymentSetupMode:(long long)arg2 referrerIdentifier:(id)arg3 paymentNetwork:(id)arg4 transitNetworkIdentifier:(id)arg5 allowedFeatureIdentifiers:(id)arg6;
- (void)_invalidateForType:(long long)arg1;
- (void)partiallyInvalidate;
- (void)invalidate;
@property(readonly, retain, nonatomic) PKPassGroupStackView *groupStackView;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)presentPeerPaymentPassAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentDiscoveryArticleForItemWithIdentifier:(id)arg1 referrerIdentifier:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentDailyCashForPassUniqueIdentifier:(id)arg1 dateComponents:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentBalanceDetailsForPassUniqueIdentifier:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentSpendingSummaryForPassUniqueIdentifier:(id)arg1 type:(unsigned long long)arg2 unit:(unsigned long long)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentAccountServicePaymentWithReferenceIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)presentPassDetailsAssociatedWithVirtualCardID:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentCreditPassAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentActionViewControllerWithUniqueID:(id)arg1 actionType:(unsigned long long)arg2;
- (void)presentAccountServiceSchedulePayment:(id)arg1;
- (void)presentPeerPaymentSetupWithCurrencyAmount:(id)arg1 flowState:(unsigned long long)arg2 senderAddress:(id)arg3;
- (void)presentPeerPaymentTopUp;
- (void)presentPeerPaymentTermsAcceptance;
- (void)_presentTransactionDetailsForTransaction:(id)arg1 paymentPass:(id)arg2;
- (void)presentTransactionDetailsForTransactionWithServiceIdentifier:(id)arg1;
- (void)presentTransactionDetailsForTransactionWithIdentifier:(id)arg1;
- (void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setupItemForExpressUpgradeMarket:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentExpressUpgradeDetailForPassUniqueID:(id)arg1 marketIdentifier:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPassDetailsWithUniqueID:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUniqueID:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setTableModalPresentationEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)presentGroupTableAnimated:(_Bool)arg1;
- (void)presentGroupTable;
- (void)presentPileOffscreen;
- (void)presentOffscreenAnimated:(_Bool)arg1 split:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)presentOffscreenAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentOnscreen:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentPaymentSetupInMode:(long long)arg1 referrerIdentifier:(id)arg2 paymentNetwork:(id)arg3 transitNetworkIdentifier:(id)arg4 allowedFeatureIdentifiers:(id)arg5;
- (void)presentInitialState;
- (void)queuePersistentCardEmulation;
- (void)updatePassesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentPassWithFieldProperties:(id)arg1 fieldPassUniqueIdentifiers:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPassWithFieldProperties:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUpdateUserNotificationIdentifier:(id)arg1;
- (void)presentDefaultPaymentPassAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forcePayment;
- (void)_presentGroupWithIndex:(unsigned long long)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool presentingPass;
- (void)paymentDeviceDidExitField;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (id)groupsControllerShouldExcludePassesWithUniqueIDsFromFiltering:(id)arg1;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2;
- (void)groupStackViewDidChangeCoachingState:(id)arg1;
- (void)groupStackViewWantsForcedPayment:(id)arg1;
- (void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(_Bool)arg3;
- (void)groupStackView:(id)arg1 wantsBottomContentSeparatorWithVisibility:(double)arg2 animated:(_Bool)arg3;
- (void)groupStackView:(id)arg1 wantsTopContentSeparatorWithVisibility:(double)arg2 animated:(_Bool)arg3;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;
- (void)_passViewedNotificationTimerFired;
- (void)_clearPassViewedNotificationTimer;
- (void)_startPassViewedNotificationTimer;
- (void)_handleStatusBarChange:(id)arg1;
- (void)updateLockscreenIdleTimer;
- (void)allowIdleTimer;
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (_Bool)groupStackViewShouldAllowReordering:(id)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)reloadGroupsForGroupStackView:(id)arg1;
- (void)viewTapped:(id)arg1;
- (_Bool)isInField;
- (_Bool)supportsExternalPresentation;
- (id)footerForGroupStackView:(id)arg1;
- (id)_makeDiscoveryGalleryView;
- (id)groupStackView:(id)arg1 subheaderForPassType:(unsigned long long)arg2;
- (id)groupStackView:(id)arg1 headerForPassType:(unsigned long long)arg2;
- (_Bool)groupStackView:(id)arg1 willHaveHeaderViewForPassType:(unsigned long long)arg2;
- (_Bool)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned long long)arg2;
- (_Bool)groupStackViewShouldShowHeaderViews:(id)arg1;
- (id)featuredGroup;
- (_Bool)hasDiscoveryContent;
- (unsigned long long)indexOfSeparationGroup;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)numberOfGroups;
- (id)groupAtIndex:(unsigned long long)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)_accessBackgroundStateForType:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_updateBackgroundType:(long long)arg1 toVisibility:(double)arg2 animated:(_Bool)arg3;
- (void)viewWillLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)loadView;
- (void)dealloc;
- (id)initWithGroupsController:(id)arg1 style:(long long)arg2;
- (id)initWithGroupsController:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
