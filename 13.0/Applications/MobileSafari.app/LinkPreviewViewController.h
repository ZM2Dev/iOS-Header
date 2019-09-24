//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, TabDocument, WBSAppLink, _SFBrowserView, _WKActivatedElementInfo;

@interface LinkPreviewViewController : UIViewController
{
    _SFBrowserView *_browserView;
    _Bool _hasPreviewHeader;
    TabDocument *_previewTabDocument;
    NSArray *_linkActions;
    _WKActivatedElementInfo *_activatedElementInfo;
    WBSAppLink *_appLink;
}

@property(retain, nonatomic) WBSAppLink *appLink; // @synthesize appLink=_appLink;
@property(nonatomic) _Bool hasPreviewHeader; // @synthesize hasPreviewHeader=_hasPreviewHeader;
@property(retain, nonatomic) _WKActivatedElementInfo *activatedElementInfo; // @synthesize activatedElementInfo=_activatedElementInfo;
@property(retain, nonatomic) NSArray *linkActions; // @synthesize linkActions=_linkActions;
@property(readonly, nonatomic) __weak TabDocument *previewTabDocument; // @synthesize previewTabDocument=_previewTabDocument;
- (void).cxx_destruct;
- (id)previewActionItems;
- (void)willCommitPreviewedWebView;
- (void)updatePreviewLoadingUI;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithTabDocument:(id)arg1;

@end
