//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface SRStarkTableViewCell : UITableViewCell
{
    _Bool _showFavoriteStar;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
}

+ (double)_tableViewCellVetricalEdgesBuffer;
+ (double)_tableViewCellHorizontalEdgesBuffer;
@property(nonatomic) _Bool showFavoriteStar; // @synthesize showFavoriteStar=_showFavoriteStar;
@property(readonly, nonatomic) UILabel *tertiaryLabel; // @synthesize tertiaryLabel=_tertiaryLabel;
@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
