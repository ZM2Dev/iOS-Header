//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentManagerUICore/DOCShareSheetBaseViewController.h>

#import <DocumentManagerUICore/DOCTagViewDelegate-Protocol.h>

@interface DOCShareSheetAccessoryViewController : DOCShareSheetBaseViewController <DOCTagViewDelegate>
{
}

- (void)tagView:(id)arg1 didDeleteTag:(id)arg2;
- (void)addTagButtonPressed;
- (_Bool)shouldShowAddTagButton;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithHost:(id)arg1 itemLoader:(id)arg2;

@end
