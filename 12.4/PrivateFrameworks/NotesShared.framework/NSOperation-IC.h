//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <NotesShared/ICLoggable-Protocol.h>

@class NSString;

@interface NSOperation (IC) <ICLoggable>
- (id)ic_loggingValues;
- (id)ic_loggingIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
