//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUTimerTriggerOffsetEditorViewController, NSDateComponents;

@protocol HUTimerTriggerOffsetEditorDelegate <NSObject>
- (void)timerTriggerOffsetEditorDidCancel:(HUTimerTriggerOffsetEditorViewController *)arg1;
- (void)timerTriggerOffsetEditor:(HUTimerTriggerOffsetEditorViewController *)arg1 didFinishWithOffset:(NSDateComponents *)arg2;
@end
