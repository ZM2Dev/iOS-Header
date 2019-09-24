//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UIImage, UIImageView, UILabel;

@interface TabIconAndTitleView : UIView
{
    _Bool _horizontallyCenterTitle;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    _Bool _usesAccessibilityContentSizeCategory;
}

+ (struct CGSize)defaultTabIconSize;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (double)_tabIconPadding;
- (struct CGSize)_tabIconSize;
@property(readonly, nonatomic) double titleOffset;
@property(retain, nonatomic) UIColor *textColor;
@property(nonatomic) long long numberOfLines;
@property(retain, nonatomic) UIFont *titleFont;
@property(retain, nonatomic) UIImage *icon;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (id)initWithHorizontallyCenteredTitle:(_Bool)arg1;

@end
