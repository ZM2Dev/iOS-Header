//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

@interface SKUIGiftDateTableViewCell : UITableViewCell
{
    UIView *_bottomBorderView;
    _Bool _checked;
    UIImageView *_checkmarkView;
    UILabel *_dateLabel;
    UILabel *_labelLabel;
    UILabel *_placeholderLabel;
    UIView *_topBorderView;
}

@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;
- (void).cxx_destruct;
- (id)_newLabel;
- (id)_labelColor;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSString *dateString;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
