//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPQuestion.h"

#import "RAPInstrumentableTarget-Protocol.h"
#import "RAPMenuItem-Protocol.h"
#import "RAPWhichOneQuestionProtocol-Protocol.h"

@class NSArray, NSString, UIImage;
@protocol RAPMenu, RAPUserSearch;

__attribute__((visibility("hidden")))
@interface RAPSearchWhichOneQuestion : RAPQuestion <RAPMenuItem, RAPWhichOneQuestionProtocol, RAPInstrumentableTarget>
{
    RAPQuestion<RAPMenu> *_followUpQuestion;
    NSArray *_selectableSearches;
    id <RAPUserSearch> _selectedValue;
}

@property(retain, nonatomic) id <RAPUserSearch> selectedValue; // @synthesize selectedValue=_selectedValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) int userAction;
- (void)_fillSubmittableProblem:(id)arg1;
- (id)_alternateAuxiliaryControlsRecording;
- (_Bool)_isRecursivelyComplete;
- (_Bool)isComplete;
@property(readonly, nonatomic) RAPQuestion<RAPMenu> *followUpQuestion; // @synthesize followUpQuestion=_followUpQuestion;
@property(readonly, nonatomic) NSArray *selectableSearches; // @synthesize selectableSearches=_selectableSearches;
@property(readonly, nonatomic) NSString *localizedSelectSearchRequestPrompt;
@property(readonly, nonatomic) int analyticTarget;
@property(readonly, nonatomic) long long questionCategory;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
