//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpotlight/CSUserQuery.h>

@class NSMutableArray;

@interface CSTopHitSearchQuery : CSUserQuery
{
    NSMutableArray *_batches;
    unsigned long long _foundItemCount;
    CDUnknownBlockType foundItemsHandler;
    CDUnknownBlockType completionHandler;
}

- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)completionHandler;
- (void)setFoundItemsHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)foundItemsHandler;
- (void).cxx_destruct;
- (void)userEngagedWithResult:(id)arg1 interactionType:(int)arg2;
- (unsigned long long)foundItemCount;
- (void)handleCompletion:(id)arg1;
- (_Bool)isTopHitQuery;
- (void)handleFoundItems:(id)arg1;
- (void)_handleBatches:(id)arg1;
- (id)filterQueries;
- (void)setFilterQueries:(id)arg1;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 attributes:(id)arg3 hitCount:(unsigned long long)arg4;

@end
