//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextReplacementGenerator.h>

@class TIKeyboardCandidate, UITextChecker;

__attribute__((visibility("hidden")))
@interface UITextReplacementGeneratorForCorrections : UITextReplacementGenerator
{
    _Bool _showRevertingAutocorrectionInPredictionView;
    _Bool _forceHistoryReplacement;
    _Bool _forceAutocorrectionGuesses;
    _Bool _forceSpellingGuesses;
    UITextChecker *_textChecker;
    TIKeyboardCandidate *_autocorrectionRecord;
    unsigned long long _maxEditDistance;
    unsigned long long _maxCountAfterAutocorrectionGuesses;
    unsigned long long _maxCountAfterSpellingGuesses;
}

@property(nonatomic) _Bool forceSpellingGuesses; // @synthesize forceSpellingGuesses=_forceSpellingGuesses;
@property(nonatomic) unsigned long long maxCountAfterSpellingGuesses; // @synthesize maxCountAfterSpellingGuesses=_maxCountAfterSpellingGuesses;
@property(nonatomic) _Bool forceAutocorrectionGuesses; // @synthesize forceAutocorrectionGuesses=_forceAutocorrectionGuesses;
@property(nonatomic) unsigned long long maxCountAfterAutocorrectionGuesses; // @synthesize maxCountAfterAutocorrectionGuesses=_maxCountAfterAutocorrectionGuesses;
@property(nonatomic) unsigned long long maxEditDistance; // @synthesize maxEditDistance=_maxEditDistance;
@property(nonatomic) _Bool forceHistoryReplacement; // @synthesize forceHistoryReplacement=_forceHistoryReplacement;
@property(retain, nonatomic) TIKeyboardCandidate *autocorrectionRecord; // @synthesize autocorrectionRecord=_autocorrectionRecord;
@property(retain, nonatomic) UITextChecker *textChecker; // @synthesize textChecker=_textChecker;
- (void).cxx_destruct;
- (id)replacements;
- (void)addSpellingGuessesForString:(id)arg1 ToReplacements:(id)arg2;
- (void)addAutocorrectionGuessesToReplacements:(id)arg1;
- (void)addPreviouslySuggestedAutocorrectionToReplacements:(id)arg1;
- (id)addReplacementRevertingAutocorrectionToReplacements:(id)arg1;
- (_Bool)isStringToReplaceMisspelled;
- (_Bool)isStringMisspelled:(id)arg1;
- (id)init;

@end
