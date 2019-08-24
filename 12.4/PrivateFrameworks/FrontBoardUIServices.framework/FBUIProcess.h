//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSProcess.h>

#import <FrontBoardUIServices/FBUIProcess-Protocol.h>

@class NSString;

@interface FBUIProcess : FBSProcess <FBUIProcess>
{
}

- (_Bool)isSystemApplicationProcess;
- (_Bool)isApplicationProcess;
- (_Bool)isExtensionProcess;
- (_Bool)isRunning;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) int pid;
@property(readonly) Class superclass;

@end
