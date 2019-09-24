//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, ODRApplication;

@protocol ODRiTunesStoreDaemonProtocol <NSObject>
- (void)cancelDownloadsForApplicationWithAdamID:(NSString *)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)resumeDownloadsForApplicationWithAdamID:(NSString *)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)pauseDownloadsForApplicationWithAdamID:(NSString *)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)applicationDownloadInitiatedForApplication:(ODRApplication *)arg1 manifestURL:(NSURL *)arg2 reason:(long long)arg3 jobID:(long long)arg4 replyBlock:(void (^)(NSError *))arg5;
@end
