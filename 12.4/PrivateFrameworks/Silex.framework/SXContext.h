//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SXDocumentController;
@protocol SXHost, SXResourceDataSource, SXTextContentProvider;

@interface SXContext : NSObject
{
    id <SXHost> _host;
    SXDocumentController *_documentController;
    id <SXTextContentProvider> _textContentProvider;
    id <SXResourceDataSource> _resourceDataSource;
}

+ (void)prewarm;
@property(readonly, nonatomic) __weak id <SXResourceDataSource> resourceDataSource; // @synthesize resourceDataSource=_resourceDataSource;
@property(readonly, nonatomic) id <SXTextContentProvider> textContentProvider; // @synthesize textContentProvider=_textContentProvider;
@property(readonly, nonatomic) SXDocumentController *documentController; // @synthesize documentController=_documentController;
@property(readonly, nonatomic) id <SXHost> host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 JSONData:(id)arg2 resourceDataSource:(id)arg3 host:(id)arg4 error:(id *)arg5;

@end

