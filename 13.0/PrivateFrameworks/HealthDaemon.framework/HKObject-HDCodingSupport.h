//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKObject.h>

@interface HKObject (HDCodingSupport)
+ (id)hd_allObjectsToInsertWithObjects:(id)arg1;
+ (Class)hd_dataEntityClass;
- (_Bool)addCodableRepresentationToCollectionForSync:(id)arg1;
- (_Bool)addCodableRepresentationToCollectionForJournal:(id)arg1;
- (_Bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
- (_Bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id *)arg5;
- (id)hd_relatedJournalEntries;
- (long long)entityType;
- (id)hd_associatedSampleTypes;
- (id)hd_associatedObjects;
- (Class)hd_dataEntityClass;
- (id)hd_sampleType;
@end
