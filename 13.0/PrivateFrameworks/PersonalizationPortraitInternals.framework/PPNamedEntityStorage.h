//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PPDKStorage, PPRecordStorageHelper, PPSQLDatabase;

@interface PPNamedEntityStorage : NSObject
{
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
}

+ (double)_scoreEntityWithInitialScore:(double)arg1 decayRate:(double)arg2 extractionDate:(id)arg3 scoringDate:(id)arg4;
+ (id)_loadTrieFromLocalAsset:(id)arg1;
- (void).cxx_destruct;
- (id)tempTableForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2;
- (double)duetWriteBatchInterval;
- (unsigned int)duetWriteBatchSize;
- (unsigned int)duetReadBatchSize;
- (void)disableSyncForBundleIds:(id)arg1;
- (struct _PASDBIterAction_)_populateEvents:(id)arg1 statement:(id)arg2 txnWitness:(id)arg3;
- (void)fixupNamedEntityDKEventsWithBatchSize:(unsigned int)arg1 isComplete:(_Bool *)arg2;
- (void)clearRemotelyGeneratedNamedEntityRecordsMissingInDuet;
- (void)_exportNamedEntityRecordsToDKWithLimit:(unsigned int)arg1 isComplete:(_Bool *)arg2 txnWitness:(id)arg3;
- (void)exportLocallyGeneratedNamedEntityRecordsToDKWithLimit:(unsigned int)arg1 isComplete:(_Bool *)arg2;
- (void)_dkEventImportToDatabaseWithEvent:(id)arg1 eventUUIDBlob:(id)arg2 txnWitness:(id)arg3;
- (void)_importDKEventsWithLimit:(unsigned int)arg1 remoteEventsOnly:(_Bool)arg2 isComplete:(_Bool *)arg3;
- (void)_asyncPopulateDatabaseFromDKEventsIfNecessary;
- (void)importRemotelyGeneratedNamedEntityDKEventsWithLimit:(unsigned int)arg1 isComplete:(_Bool *)arg2;
- (void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)arg1 txnWitness:(id)arg2;
- (void)processNewDKEventDeletions;
- (void)_asyncProcessNewDKEventDeletions;
- (id)_deletionQueue;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneNamedEntityRemoved:(_Bool *)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 atLeastOneNamedEntityRemoved:(_Bool *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneNamedEntityRemoved:(_Bool *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneNamedEntityRemoved:(_Bool *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)deleteAllNamedEntitiesOlderThanDate:(id)arg1 atLeastOneNamedEntityRemoved:(_Bool *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (void)_prepareDonationStatement:(id)arg1 scoredNamedEntity:(struct PPScoredItem *)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 occurrencesInSource:(unsigned short)arg7 weightMultiplier:(double)arg8 sourceRowId:(long long)arg9;
- (_Bool)_donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 txnWitness:(id)arg7;
- (_Bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 error:(id *)arg7;
- (struct _PASDBIterAction_)_populateUpdates:(id)arg1 statement:(id)arg2 source:(id)arg3 weightMultiplier:(double)arg4 entityToScoredEntityMap:(id)arg5;
- (id)_updatePreexistingEntitiesMatchingEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 txnWitness:(id)arg4;
- (_Bool)_shouldSuppressRepeatedImpressions:(id)arg1;
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;
- (id)_createRecordWithStatement:(id)arg1;
- (_Bool)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 maxRecords:(unsigned int)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(_Bool)arg4;

@end

