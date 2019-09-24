//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphHealthRecording-Protocol.h>

@class NSString;

@interface PGGraphHealthRecorder : NSObject <PGGraphHealthRecording>
{
}

- (void)recordNumberOfHighlightEnrichmentTimeouts:(unsigned long long)arg1;
- (void)recordNumberOfHighlightEnrichmentsCancelled:(unsigned long long)arg1;
- (void)recordTimeBetweenHighlightEnrichmentsWithLastEnrichmentDate:(id)arg1 currentEnrichmentDate:(id)arg2;
- (void)recordNumberOfGraphRebuildsCancelled:(unsigned long long)arg1;
- (void)recordNumberOfUnscheduledRebuilds:(unsigned long long)arg1;
- (void)recordNumberOfGraphRebuildTimeouts:(unsigned long long)arg1;
- (void)recordNumberOfGraphRebuildFailures:(unsigned long long)arg1;
- (void)recordTimeBetweenGraphRebuildsWithLastRebuildDate:(id)arg1 currentRebuildDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
