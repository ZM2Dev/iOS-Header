//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentContactResolverDelegate-Protocol.h>

@class NSArray, NSDateFormatter, NSString, NSTimeZone, PKPaymentPass, PKPaymentTransaction, PKPaymentTransactionCellController, PKPaymentTransactionDetailHeaderView, PKPeerPaymentContactResolver, PKPeerPaymentController, PKPeerPaymentStatusResponse, PKTransactionDetailBottomContainer, UIImage;
@protocol PKPaymentDataProvider;

@interface PKPaymentTransactionDetailViewController : PKSectionTableViewController <PKPeerPaymentContactResolverDelegate, PKPaymentDataProviderDelegate>
{
    long long _detailViewStyle;
    _Bool _showRawName;
    _Bool _showTransactionTimeZone;
    _Bool _showProductTimeZone;
    PKPaymentTransaction *_associatedRefund;
    PKPaymentTransaction *_associatedAdjustment;
    PKPaymentTransactionCellController *_transactionCellController;
    _Bool _allowTransactionLinks;
    _Bool _issuerAppDeepLinkingEnabled;
    _Bool _inBridge;
    PKPaymentTransaction *_transaction;
    PKPaymentPass *_paymentPass;
    id <PKPaymentDataProvider> _paymentServiceDataProvider;
    PKPaymentTransactionDetailHeaderView *_headerView;
    PKPeerPaymentContactResolver *_contactResolver;
    PKPeerPaymentController *_peerPaymentController;
    UIImage *_mapTilePlaceholderImage;
    NSArray *_lineItems;
    PKPeerPaymentStatusResponse *_peerPaymentStatusResponse;
    NSDateFormatter *_transactionDateFormatter;
    NSDateFormatter *_transactionLocalTimeDateFormatter;
    NSDateFormatter *_productTimeZoneFormatter;
    NSTimeZone *_productTimeZone;
    PKTransactionDetailBottomContainer *_bottomContainer;
}

@property(retain, nonatomic) PKTransactionDetailBottomContainer *bottomContainer; // @synthesize bottomContainer=_bottomContainer;
@property(retain, nonatomic) NSTimeZone *productTimeZone; // @synthesize productTimeZone=_productTimeZone;
@property(retain, nonatomic) NSDateFormatter *productTimeZoneFormatter; // @synthesize productTimeZoneFormatter=_productTimeZoneFormatter;
@property(retain, nonatomic) NSDateFormatter *transactionLocalTimeDateFormatter; // @synthesize transactionLocalTimeDateFormatter=_transactionLocalTimeDateFormatter;
@property(retain, nonatomic) NSDateFormatter *transactionDateFormatter; // @synthesize transactionDateFormatter=_transactionDateFormatter;
@property(retain, nonatomic) PKPeerPaymentStatusResponse *peerPaymentStatusResponse; // @synthesize peerPaymentStatusResponse=_peerPaymentStatusResponse;
@property(retain, nonatomic) NSArray *lineItems; // @synthesize lineItems=_lineItems;
@property(retain, nonatomic) UIImage *mapTilePlaceholderImage; // @synthesize mapTilePlaceholderImage=_mapTilePlaceholderImage;
@property(nonatomic) _Bool inBridge; // @synthesize inBridge=_inBridge;
@property(nonatomic) _Bool issuerAppDeepLinkingEnabled; // @synthesize issuerAppDeepLinkingEnabled=_issuerAppDeepLinkingEnabled;
@property(retain, nonatomic) PKPeerPaymentController *peerPaymentController; // @synthesize peerPaymentController=_peerPaymentController;
@property(retain, nonatomic) PKPeerPaymentContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;
@property(retain, nonatomic) PKPaymentTransactionDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) id <PKPaymentDataProvider> paymentServiceDataProvider; // @synthesize paymentServiceDataProvider=_paymentServiceDataProvider;
@property(readonly, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(readonly, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)_tableView:(id)arg1 willDisplayAmountDetailsCell:(id)arg2 atIndexPath:(id)arg3;
- (id)_tableView:(id)arg1 cellForAmountDetailLineItemAtIndex:(long long)arg2;
- (id)_debugDetailCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_fraudRiskCellForTableView:(id)arg1;
- (id)_transactionIdentifierCellForTableView:(id)arg1;
- (id)_statusCellForTableView:(id)arg1;
- (id)_amountDetailsCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (unsigned long long)_lineItemItemForRowIndex:(unsigned long long)arg1;
- (_Bool)_amountDetailsRowIsEnabled:(unsigned long long)arg1;
- (unsigned long long)_numberOfAmountDetailsRows;
- (unsigned long long)_amountDetailsRowForIndex:(unsigned long long)arg1;
- (void)_tableView:(id)arg1 didSelectMechantAddressAtIndexPath:(id)arg2;
- (id)_mapTilePlaceholderImage;
- (id)_merchantAddressCellForTableView:(id)arg1;
- (id)_transactionStatusString;
- (void)_presentReportIssue;
- (_Bool)_transactionHasNonZeroSecondaryFundingSourceAmount;
- (void)_openTransactionInIssuerApp;
- (void)_openMessagesToPresentAction:(unsigned long long)arg1;
- (void)_tableView:(id)arg1 didSelectPeerPaymentAction:(id)arg2 atIndexPath:(id)arg3;
- (void)_tableView:(id)arg1 didSelectActionAtIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 actionButtonCellForSection:(unsigned long long)arg2;
- (id)_tableView:(id)arg1 cellForActionAtIndex:(long long)arg2;
- (long long)_rowIndexForActionRow:(unsigned long long)arg1;
- (unsigned long long)_actionRowForRowIndex:(long long)arg1;
- (long long)_numberOfActionRowsEnabled;
- (_Bool)_shouldHighlightAction:(unsigned long long)arg1;
- (_Bool)_actionRowIsEnabled:(unsigned long long)arg1;
- (void)contactsDidChangeForContactResolver:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)pkui_navigationBarTintColor;
- (_Bool)pkui_prefersNavigationBarShadowHidden;
- (void)_handlePeerPaymentDisplayableError:(id)arg1 withPeerPaymentController:(id)arg2;
- (void)_performPeerPaymentAction:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_subtitleCellWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)_titleValueCellWithTitle:(id)arg1 value:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_updateTableHeaderHeight;
- (void)_handleTransactionHeaderTapRecognizer:(id)arg1;
- (id)formattedBalanceAdjustmentAmountWithTransitDescriptors;
- (void)_reloadTableHeaderView;
- (void)viewWillLayoutSubviews;
- (void)_updatePeerPaymentTransactionStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (_Bool)shouldMapSection:(unsigned long long)arg1;
- (void)_recomputeLineItems;
- (void)setTransaction:(id)arg1;
- (id)initWithTransaction:(id)arg1 paymentPass:(id)arg2 contactResolver:(id)arg3 peerPaymentController:(id)arg4 paymentServiceDataProvider:(id)arg5 detailViewStyle:(long long)arg6 allowTransactionLinks:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
