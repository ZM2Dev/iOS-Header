//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface WDTodayDaySectionHeaderView : UITableViewHeaderFooterView
{
    NSLayoutConstraint *_contentViewTopAnchorToBaselineConstraint;
    NSLayoutConstraint *_contentViewBottomAnchorToBaselineConstraint;
    UILabel *_titleLabel;
}

+ (double)preferredHeight;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
@property(retain, nonatomic) NSString *title;
- (id)_fontForLabel;
- (void)_updateFont;
- (void)_updateForCurrentSizeCategory;
- (id)initWithReuseIdentifier:(id)arg1;

@end
