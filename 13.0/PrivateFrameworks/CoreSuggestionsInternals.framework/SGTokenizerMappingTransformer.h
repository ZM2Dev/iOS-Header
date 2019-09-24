//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSLinguisticTagger, NSString;

@interface SGTokenizerMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSLinguisticTagger *_tagger;
    _Bool _nameTagging;
    NSString *_punctuationMapping;
    NSString *_personalNameMapping;
    NSString *_locale;
    void *_nlpTagger;
    int _linguisticDataNotificationToken;
}

+ (id)forLocale:(id)arg1 withNameTagging:(_Bool)arg2 personalNameMapping:(id)arg3 punctuationMapping:(id)arg4;
+ (id)forLocale:(id)arg1 withPersonalNameMapping:(id)arg2;
+ (id)forLocale:(id)arg1;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTokenizerMappingTransformer:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;
- (void)transformWithNLLinguisticTagger:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)transformWithCoreNLP:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)initForLocale:(id)arg1 withNameTagging:(_Bool)arg2 personalNameMapping:(id)arg3 punctuationMapping:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
