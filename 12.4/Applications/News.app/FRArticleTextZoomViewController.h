//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSString, UIButton;

@interface FRArticleTextZoomViewController : UIViewController
{
    NSLayoutConstraint *_dividerLineWidthConstraint;
    UIButton *_decreaseTextSizeButton;
    UIButton *_increaseTextSizeButton;
    NSString *_tagID;
}

+ (id)storyboardIdentifier;
+ (id)articleTextZoomViewControllerWithStoryboard:(id)arg1 tagID:(id)arg2;
@property(copy, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(retain, nonatomic) UIButton *increaseTextSizeButton; // @synthesize increaseTextSizeButton=_increaseTextSizeButton;
@property(retain, nonatomic) UIButton *decreaseTextSizeButton; // @synthesize decreaseTextSizeButton=_decreaseTextSizeButton;
@property(retain, nonatomic) NSLayoutConstraint *dividerLineWidthConstraint; // @synthesize dividerLineWidthConstraint=_dividerLineWidthConstraint;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)increaseTextSizeButton:(id)arg1;
- (void)decreaseTextSizeButton:(id)arg1;
- (void)_validateZoomButtonStates;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;

@end

