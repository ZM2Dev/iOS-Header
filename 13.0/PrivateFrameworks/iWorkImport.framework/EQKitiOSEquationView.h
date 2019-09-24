//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol EQKitLayout;

__attribute__((visibility("hidden")))
@interface EQKitiOSEquationView : UIView
{
    id <EQKitLayout> _equationLayout;
    double _viewScale;
    double _padding;
    struct CGPoint _offset;
}

@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
@property(retain, nonatomic) id <EQKitLayout> equationLayout; // @synthesize equationLayout=_equationLayout;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
