//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/WKNavigationDelegate-Protocol.h>

@class NSString, WFWebResource, WKNavigation, WKWebView;

@interface WFWKWebViewCapturer : NSObject <WKNavigationDelegate>
{
    WKWebView *_webView;
    WKNavigation *_pageNavigation;
    WFWebResource *_webResource;
    CDUnknownBlockType _completionHandler;
}

+ (void)loadWebResource:(id)arg1 withSize:(struct CGSize)arg2 configuration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) WFWebResource *webResource; // @synthesize webResource=_webResource;
@property(retain, nonatomic) WKNavigation *pageNavigation; // @synthesize pageNavigation=_pageNavigation;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)loadWebResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSize:(struct CGSize)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
