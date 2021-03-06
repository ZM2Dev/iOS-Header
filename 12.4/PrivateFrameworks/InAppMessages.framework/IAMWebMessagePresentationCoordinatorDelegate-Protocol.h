//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InAppMessages/NSObject-Protocol.h>

@class IAMWebMessagePresentationCoordinator, NSDictionary, UIViewController;

@protocol IAMWebMessagePresentationCoordinatorDelegate <NSObject>
- (void)webMessagePresentationCoordinatorWebMessageDidRequestAction:(IAMWebMessagePresentationCoordinator *)arg1 actionConfiguration:(NSDictionary *)arg2;
- (void)webMessagePresentationCoordinatorWebMessageDidReportEvent:(IAMWebMessagePresentationCoordinator *)arg1 event:(NSDictionary *)arg2;
- (void)presentViewController:(UIViewController *)arg1 forPresentationCoordinator:(IAMWebMessagePresentationCoordinator *)arg2 completion:(void (^)(void))arg3;
- (UIViewController *)viewControllerForModalPresentationUsingCoordinator:(IAMWebMessagePresentationCoordinator *)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidFinishPresentation:(IAMWebMessagePresentationCoordinator *)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidFail:(IAMWebMessagePresentationCoordinator *)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidLoad:(IAMWebMessagePresentationCoordinator *)arg1;
@end

