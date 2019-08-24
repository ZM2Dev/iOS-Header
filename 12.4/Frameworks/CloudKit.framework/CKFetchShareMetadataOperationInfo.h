//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

@class NSArray;

@interface CKFetchShareMetadataOperationInfo : CKOperationInfo
{
    _Bool _shouldFetchRootRecord;
    NSArray *_shareURLsToFetch;
    NSArray *_rootRecordDesiredKeys;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *rootRecordDesiredKeys; // @synthesize rootRecordDesiredKeys=_rootRecordDesiredKeys;
@property(nonatomic) _Bool shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;
@property(retain, nonatomic) NSArray *shareURLsToFetch; // @synthesize shareURLsToFetch=_shareURLsToFetch;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
