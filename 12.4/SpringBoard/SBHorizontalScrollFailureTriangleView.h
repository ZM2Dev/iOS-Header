//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SBHorizontalScrollFailureTriangleView : UIView
{
    int _style;
    _Bool _pointingRight;
    UIColor *_contentColor;
}

@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithStyle:(int)arg1 recognizer:(id)arg2 forPoint:(struct CGPoint)arg3 withMaxVerticalOffset:(double)arg4 inView:(id)arg5 pointingRight:(_Bool)arg6;

@end
