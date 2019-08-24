//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSNumber, NSString, PPTopicQuery;

@protocol PPTopicReadOnlyServerProtocol
- (void)feedbackMappedTopicsOverallEngagement:(NSNumber *)arg1 forMapping:(NSString *)arg2;
- (void)feedbackTopicsOverallEngagement:(NSNumber *)arg1;
- (void)feedbackEngagedMappedTopics:(NSDictionary *)arg1 forMapping:(NSString *)arg2;
- (void)feedbackEngagedTopics:(NSDictionary *)arg1;
- (void)feedbackUsedMappedTopics:(NSArray *)arg1 forMapping:(NSString *)arg2;
- (void)feedbackUsedTopics:(NSArray *)arg1;
- (void)scoresForTopicMapping:(NSString *)arg1 query:(PPTopicQuery *)arg2 queryId:(unsigned long long)arg3;
- (void)topicRecordsWithQuery:(PPTopicQuery *)arg1 queryId:(unsigned long long)arg2;
- (void)rankedTopicsWithQuery:(PPTopicQuery *)arg1 queryId:(unsigned long long)arg2;
@end
