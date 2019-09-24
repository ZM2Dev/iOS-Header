//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCUIUserEnrollmentAccountSpecifierProvider : NSObject
{
    CDUnknownBlockType _devicePasscodeVerificationCompletionHandler;
}

+ (id)deleteAccountGroupFooterText;
+ (id)warningTextForAccountDeletion;
+ (id)labelTextForAccountSummaryCell;
+ (id)titleForAccountSummaryGroup;
@property(copy, nonatomic) CDUnknownBlockType devicePasscodeVerificationCompletionHandler; // @synthesize devicePasscodeVerificationCompletionHandler=_devicePasscodeVerificationCompletionHandler;
- (void).cxx_destruct;
- (void)didCancelEnteringPIN;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)_verifyDevicePasscodeWithPresentingViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)preflightsAccountDeletion:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
