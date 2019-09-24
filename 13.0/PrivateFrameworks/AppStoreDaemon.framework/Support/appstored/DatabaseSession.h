//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DownloadPolicyManager, SSSQLiteDatabase;

@interface DatabaseSession : NSObject
{
    SSSQLiteDatabase *_database;
    DownloadPolicyManager *_policyManager;
}

@property(readonly, nonatomic) DownloadPolicyManager *policyManager; // @synthesize policyManager=_policyManager;
@property(readonly, nonatomic) SSSQLiteDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)initWithSessionDescriptor:(id)arg1;
- (id)init;

@end
