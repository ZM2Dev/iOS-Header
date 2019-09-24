//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class PKDashboardPaymentTransactionItem, PKPaymentTransactionGroupItem, PKPaymentTransactionView;

@interface PKPaymentTransactionCollectionViewCell : PKDashboardCollectionViewCell
{
    PKDashboardPaymentTransactionItem *_item;
    PKPaymentTransactionGroupItem *_groupItem;
    PKPaymentTransactionView *_transactionView;
}

@property(readonly, nonatomic) PKPaymentTransactionView *transactionView; // @synthesize transactionView=_transactionView;
@property(retain, nonatomic) PKPaymentTransactionGroupItem *groupItem; // @synthesize groupItem=_groupItem;
@property(retain, nonatomic) PKDashboardPaymentTransactionItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (double)maxWidthForTransactionCellInWidth:(double)arg1;
- (void)setShowsBottomSeparator:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
