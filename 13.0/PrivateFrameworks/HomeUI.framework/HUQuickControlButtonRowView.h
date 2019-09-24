//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlAuxiliaryView-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIScrollView;

@interface HUQuickControlButtonRowView : UIView <HUQuickControlAuxiliaryView>
{
    long long _preferredContentAlignment;
    NSMutableArray *_mutableButtonViews;
    NSArray *_buttonConstraints;
    UIScrollView *_scrollView;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *buttonConstraints; // @synthesize buttonConstraints=_buttonConstraints;
@property(retain, nonatomic) NSMutableArray *mutableButtonViews; // @synthesize mutableButtonViews=_mutableButtonViews;
@property(nonatomic) long long preferredContentAlignment; // @synthesize preferredContentAlignment=_preferredContentAlignment;
- (void).cxx_destruct;
- (void)_updateLayoutIfNecessary;
- (void)_clearButtonConstraints;
- (void)_contentSizeCategoryDidChange;
@property(readonly, nonatomic) _Bool hasCenteredContent;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateConstraints;
- (void)contentDidChange;
- (void)removeButtonView:(id)arg1;
- (void)insertButtonView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addButtonView:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *buttonViews;
- (id)initWithButtonViews:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
