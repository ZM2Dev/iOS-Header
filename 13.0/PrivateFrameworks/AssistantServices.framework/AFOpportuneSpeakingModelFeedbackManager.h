//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFOpportuneSpeakingModelFeedback, NSMutableDictionary;
@protocol _DKKnowledgeQuerying;

@interface AFOpportuneSpeakingModelFeedbackManager : NSObject
{
    AFOpportuneSpeakingModelFeedback *_feedback;
    id <_DKKnowledgeQuerying> _knowledgeStore;
    NSMutableDictionary *_usageEventsBySpeakableId;
}

- (void).cxx_destruct;
- (void)save;
- (void)loadIfNecessary;
- (_Bool)interactionDetectedForSpeakableId:(id)arg1;
- (void)fetchNotificationUsageForSpeakableId:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)setLastNegativeFeedbackForContact:(id)arg1;
- (id)lastNegativeFeedbackForContact:(id)arg1;
- (id)init;

@end
