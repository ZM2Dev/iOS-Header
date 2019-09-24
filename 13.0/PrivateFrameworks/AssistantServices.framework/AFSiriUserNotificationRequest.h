//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriExternalRequest-Protocol.h>

@class NSString, UNNotification;

@interface AFSiriUserNotificationRequest : NSObject <AFSiriExternalRequest>
{
    UNNotification *_notification;
    NSString *_sourceAppId;
}

+ (_Bool)supportedForApplicationWithBundleId:(id)arg1;
+ (_Bool)supportedOnPlatform;
+ (_Bool)canBeHandled;
- (void).cxx_destruct;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2;

@end
