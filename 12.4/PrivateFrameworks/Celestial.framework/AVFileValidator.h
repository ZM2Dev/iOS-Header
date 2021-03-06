//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVFileValidator : NSObject
{
    struct AVFileValidatorPrivate *_priv;
    NSString *_validationRules;
}

@property(retain) NSString *validationRules; // @synthesize validationRules=_validationRules;
- (float)progress;
- (_Bool)isCompleted;
- (void)cancel;
- (_Bool)validateSyncWithError:(id *)arg1;
- (void)validate;
- (void)validateForCameraRoll;
- (id)validateBlocking:(_Bool)arg1;
- (void)postNotificationForCallback:(id)arg1;
- (id)notificationForFileCheckResult:(id)arg1;
- (_Bool)isStreaming;
- (id)url;
- (void)dealloc;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

