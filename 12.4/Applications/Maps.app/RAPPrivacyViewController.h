//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "RAPPrivacyDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RAPPrivacyViewController : UIViewController <RAPPrivacyDelegate>
{
}

- (void)_presentPrivacyController:(id)arg1;
- (void)presentPrivacyScreen:(CDUnknownBlockType)arg1;
- (void)presentPrivacyScreenForLocationOfInterestType:(long long)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
