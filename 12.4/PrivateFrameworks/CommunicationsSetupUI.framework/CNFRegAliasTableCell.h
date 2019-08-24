//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface CNFRegAliasTableCell : PSTableCell
{
    _Bool _hasSpinner;
    UIActivityIndicatorView *_spinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) _Bool hasSpinner; // @synthesize hasSpinner=_hasSpinner;
- (void).cxx_destruct;
- (_Bool)usesStandardBackgroundImage;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)_updateIcon;
- (void)setChecked:(_Bool)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
