//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SOS/SOSServerProtocol-Protocol.h>

@protocol SOSInternalServerProtocol <SOSServerProtocol>
- (void)didDismissSOSBeforeSOSCall:(long long)arg1;
- (void)dismissSOSWithCompletion:(void (^)(_Bool))arg1;
- (void)updateCurrentSOSInteractiveState:(long long)arg1;
- (void)updateCurrentSOSInitiationState:(long long)arg1;
@end
