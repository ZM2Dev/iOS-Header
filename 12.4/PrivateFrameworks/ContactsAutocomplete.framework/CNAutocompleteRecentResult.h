//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocomplete/CNAutocompleteResult.h>

@class NSDate;

@interface CNAutocompleteRecentResult : CNAutocompleteResult
{
    NSDate *_date;
    _Bool _matchesSendingAddress;
    _Bool _completesChosenGroup;
}

+ (id)comparators;
+ (id)groupResultWithDisplayName:(id)arg1 date:(id)arg2;
+ (id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 date:(id)arg4;
@property _Bool completesChosenGroup; // @synthesize completesChosenGroup=_completesChosenGroup;
@property _Bool matchesSendingAddress; // @synthesize matchesSendingAddress=_matchesSendingAddress;
@property(readonly) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;

@end
