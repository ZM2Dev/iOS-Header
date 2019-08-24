//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIDropInteraction;
@protocol DropHitTestingViewDelegate;

@interface DropHitTestingView : UIView
{
    UIDropInteraction *_dropInteraction;
    id <DropHitTestingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <DropHitTestingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
