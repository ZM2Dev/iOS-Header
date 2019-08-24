//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface KeyboardAvoidingView : UIView
{
    float _constraintPriority;
    UIView *_contentView;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

+ (void)startObservingKeyboard;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) float constraintPriority; // @synthesize constraintPriority=_constraintPriority;
- (void).cxx_destruct;
- (void)updateForKeyboardFrame:(struct CGRect)arg1;
- (void)keyboardWillOrDidChangeFrame:(id)arg1;
- (void)removeConstraints;
- (void)addConstraints;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)updateForKeyboardFrame;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithContentView:(id)arg1;
- (id)initWithContentView:(id)arg1 frame:(struct CGRect)arg2;

@end
