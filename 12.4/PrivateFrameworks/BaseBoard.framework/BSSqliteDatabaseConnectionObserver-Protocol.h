//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/NSObject-Protocol.h>

@class BSSqliteDatabaseConnection;

@protocol BSSqliteDatabaseConnectionObserver <NSObject>

@optional
- (void)sqliteDatabaseConnectionWillClose:(BSSqliteDatabaseConnection *)arg1;
@end
