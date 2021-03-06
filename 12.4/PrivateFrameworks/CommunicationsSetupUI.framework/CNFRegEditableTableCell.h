//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSEditableTableCell.h>

@class CNFRegShadowView, UIImage;

@interface CNFRegEditableTableCell : PSEditableTableCell
{
    SEL _emptyStateSelector;
    SEL _didBeginEditingSelector;
    SEL _didEndEditingSelector;
    id _textChangeObserver;
    _Bool _textFieldIsEmpty;
    _Bool _skipDelegateCallback;
    UIImage *_shadowImage;
    CNFRegShadowView *_shadowView;
    UIImage *_customCheckmarkImage;
    UIImage *_customCheckmarkImageSelected;
}

@property(retain, nonatomic) UIImage *customCheckmarkImageSelected; // @synthesize customCheckmarkImageSelected=_customCheckmarkImageSelected;
@property(retain, nonatomic) UIImage *customCheckmarkImage; // @synthesize customCheckmarkImage=_customCheckmarkImage;
@property(retain, nonatomic) CNFRegShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) _Bool skipDelegateCallback; // @synthesize skipDelegateCallback=_skipDelegateCallback;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setChecked:(_Bool)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)notifyTextFieldDidEndEditing;
- (void)notifyTextFieldDidBeginEditing;
- (void)_stopListeningForTextChanges;
- (void)_startListeningForTextChanges;
- (void)_handleTextChanged;
- (_Bool)_textFieldIsCurrentlyEmpty;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (void)textFieldChangedExternally;
- (void)setTitle:(id)arg1;
- (void)notifyTextFieldEmptyStateChanged:(_Bool)arg1;
- (void)_updateTextFieldOffsetWithDict:(id)arg1;

@end

