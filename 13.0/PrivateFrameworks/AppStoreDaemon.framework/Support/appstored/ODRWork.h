//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

@class KeepAlive, NSProgress, NSString;

@interface ODRWork : SQLiteMemoryEntity
{
    _Bool _isCancelled;
    long long _jobID;
    KeepAlive *_keepAlive;
    NSProgress *_progress;
}

+ (id)defaultProperties;
+ (Class)databaseEntityClass;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)_startTrackingWork;
- (id)_missingPrefetchAssetPacksForApplication:(id)arg1;
- (id)_missingInitialAssetPacksForApplication:(id)arg1;
- (id)_initiateDownloadOfAssetPackID:(id)arg1 manifest:(id)arg2 forApplication:(id)arg3 priority:(double)arg4 isDiscretionary:(_Bool)arg5 jobID:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_downloadAssetPacks:(id)arg1 forApplication:(id)arg2 trackProgress:(_Bool)arg3 downloadsCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_completeIfNecessary:(id)arg1;
- (void)performPrefetchDownloads;
- (void)startInitialDownloadsWithProgress:(id)arg1 jobID:(long long)arg2 downloadsCompletionHandler:(CDUnknownBlockType)arg3;
- (void)start;
- (void)markAsCompleted;
- (void)cancel;
- (id)description;
@property(nonatomic) long long reason;
@property(nonatomic, getter=isDiscretionary) _Bool discretionary;
@property(copy, nonatomic) NSString *bundleID;
@property(readonly, nonatomic, getter=isCanceled) _Bool canceled;

@end

