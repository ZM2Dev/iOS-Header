//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UITextField;
@protocol RAPAddressCellDelegate;

__attribute__((visibility("hidden")))
@interface RAPTextTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    UITextField *_valueField;
    NSArray *_constraints;
    NSLayoutConstraint *_topToFirstBaselineConstraint;
    NSLayoutConstraint *_lastBaselineToBottomConstraint;
    int _analyticTarget;
    id <RAPAddressCellDelegate> _delegate;
    long long _correctableItemKind;
    NSString *_placeholder;
    NSString *_value;
}

@property(nonatomic) int analyticTarget; // @synthesize analyticTarget=_analyticTarget;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) long long correctableItemKind; // @synthesize correctableItemKind=_correctableItemKind;
@property(nonatomic) __weak id <RAPAddressCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) long long preferredKeyboardType;
- (void)_instrumentTextFieldTap;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)fieldSelected:(id)arg1;
- (void)fieldChanged:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setupConstraints;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_setupViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
