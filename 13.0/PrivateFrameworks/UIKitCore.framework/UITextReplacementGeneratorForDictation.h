//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextReplacementGenerator.h>

@class NSTextAlternatives;

__attribute__((visibility("hidden")))
@interface UITextReplacementGeneratorForDictation : UITextReplacementGenerator
{
    NSTextAlternatives *_alternatives;
}

@property(readonly, nonatomic) NSTextAlternatives *alternatives; // @synthesize alternatives=_alternatives;
- (void).cxx_destruct;
- (id)replacements;
- (id)initWithAlternatives:(id)arg1 stringToReplace:(id)arg2 replacementRange:(id)arg3;

@end
