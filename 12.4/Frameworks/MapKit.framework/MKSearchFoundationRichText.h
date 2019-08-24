//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFRichText.h>

__attribute__((visibility("hidden")))
@interface MKSearchFoundationRichText : SFRichText
{
    CDUnknownBlockType _completionHandlers;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandlers; // @synthesize completionHandlers=_completionHandlers;
- (void).cxx_destruct;
- (_Bool)isRichTextResolved;
- (void)_invokeCompletionHandlers;
- (void)setText:(id)arg1;
- (void)loadRichTextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initRichTextTitleWithMapItem:(id)arg1 resultsType:(unsigned long long)arg2;
- (id)initWithString:(id)arg1;

@end
