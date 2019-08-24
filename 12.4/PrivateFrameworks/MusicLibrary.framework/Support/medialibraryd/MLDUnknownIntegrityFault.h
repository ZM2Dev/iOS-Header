//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MLDDatabaseIntegrityFault.h"

@class NSString;

@interface MLDUnknownIntegrityFault : MLDDatabaseIntegrityFault
{
    NSString *_faultString;
}

@property(readonly, nonatomic) NSString *faultString; // @synthesize faultString=_faultString;
- (void).cxx_destruct;
- (_Bool)attemptRecoveryUsingHandle:(struct sqlite3 *)arg1 withError:(id *)arg2;
- (id)description;
- (id)initWithFaultString:(id)arg1;

@end
