//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ToneKit/TKPickerCollectionViewCell.h>

#import <ToneKit/UITextFieldDelegate-Protocol.h>

@class NSString, UIColor, UIFont, UITextField;
@protocol TKVibrationPickerCollectionViewCellDelegate;

@interface TKVibrationPickerCollectionViewCell : TKPickerCollectionViewCell <UITextFieldDelegate>
{
    UITextField *_removableTextField;
    _Bool _editable;
    id <TKVibrationPickerCollectionViewCellDelegate> _delegate;
    UIColor *_regularTextColor;
    UIColor *_persistentBackgroundColor;
}

@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(retain, nonatomic) UIColor *persistentBackgroundColor; // @synthesize persistentBackgroundColor=_persistentBackgroundColor;
@property(retain, nonatomic) UIColor *regularTextColor; // @synthesize regularTextColor=_regularTextColor;
@property(nonatomic) __weak id <TKVibrationPickerCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_applyPersistentBackgroundColor;
- (void)applyLayoutAttributes:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_makeRemovableTextFieldEditable:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_layoutRemovableTextField;
- (void)makeTextFieldResignFirstResponderIfNeeded;
- (_Bool)_isDisplayingRemovableTextField;
@property(nonatomic, getter=isChecked) _Bool checked;
@property(retain, nonatomic) UIColor *highlightedTextColor;
@property(retain, nonatomic) UIFont *regularTextFont;
@property(retain, nonatomic) NSString *placeholderText;
@property(retain, nonatomic) NSString *labelText;
- (void)setEditing:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

