//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;
@protocol BRLTTranslatorProtocol;

@interface BRLTSTranslator : NSObject
{
    id <BRLTTranslatorProtocol> _translator;
    NSBundle *_bundle;
}

@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (id)textForBraille:(id)arg1 parameters:(id)arg2 locations:(out id *)arg3;
- (id)brailleForText:(id)arg1 parameters:(id)arg2 locations:(out id *)arg3;
@property(readonly, nonatomic) id <BRLTTranslatorProtocol> translator; // @synthesize translator=_translator;
- (id)initWithBundle:(id)arg1;

@end
