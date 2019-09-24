//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface OBBaseWelcomeController : UIViewController
{
    unsigned long long _templateType;
}

@property(nonatomic) unsigned long long templateType; // @synthesize templateType=_templateType;
- (void)_presentationStyleValidationCheck;
- (void)_applyChromelessToBar:(long long)arg1 navigationItem:(id)arg2;
- (id)navigationItem;
- (double)autoScrollEdgeTransitionDistance;
- (long long)navigationBarScrollToEdgeBehavior;
- (struct NSDirectionalEdgeInsets)insetsForTemplateType:(unsigned long long)arg1;
- (struct NSDirectionalEdgeInsets)directionalLayoutMargins;
- (void)updateDirectionalLayoutMargins;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

@end
