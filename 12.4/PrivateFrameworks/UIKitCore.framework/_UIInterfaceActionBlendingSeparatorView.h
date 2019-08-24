//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBlendingHighlightView.h>

#import <UIKitCore/UIInterfaceActionVisualSectionSeparatorDisplaying-Protocol.h>
#import <UIKitCore/UIInterfaceActionVisualSeparatorDisplaying-Protocol.h>

@class NSString, _UIInterfaceActionSeparatorConstraintController;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionBlendingSeparatorView : _UIBlendingHighlightView <UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying>
{
    _UIInterfaceActionSeparatorConstraintController *_separatorViewConstraints;
}

+ (id)plusDColor;
+ (id)colorBurnColor;
@property(readonly, retain, nonatomic) _UIInterfaceActionSeparatorConstraintController *separatorViewConstraints; // @synthesize separatorViewConstraints=_separatorViewConstraints;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setConstantSizedAxis:(long long)arg1;
@property(nonatomic) double constantAxisDimension;
- (id)init;
- (id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
