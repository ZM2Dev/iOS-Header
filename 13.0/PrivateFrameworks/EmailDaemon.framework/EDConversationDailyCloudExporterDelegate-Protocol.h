//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;

@protocol EDConversationDailyCloudExporterDelegate
- (NSArray *)flaggedConversationsChangedBetweenStartAnchor:(long long)arg1 endAnchor:(long long)arg2;
- (void)setNewPreviousSyncAnchorForDailyExport:(long long)arg1;
- (long long)currentSyncAnchorForDailyExport;
- (long long)previousSyncAnchorForDailyExport;
@end
