//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBStarkNotificationViewController;
@protocol SBUIBannerView;

@protocol SBStarkNotificationViewControllerDelegate <NSObject>
- (void)notificationViewController:(SBStarkNotificationViewController *)arg1 stateDidChangeFrom:(int)arg2;
- (void)notificationViewController:(SBStarkNotificationViewController *)arg1 willDisplayBannerView:(id <SBUIBannerView>)arg2;
@end
