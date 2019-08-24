//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/NSCopying-Protocol.h>
#import <VoiceMemos/NSMutableCopying-Protocol.h>
#import <VoiceMemos/RCDictionaryPListRepresentationCoding-Protocol.h>

@class NSArray, NSDate, NSString, NSURL;

@interface RCComposition : NSObject <NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding>
{
    _Bool _cachedComposedAVURLDurationIsValid;
    _Bool _readonly;
    NSArray *_composedFragments;
    NSString *_savedRecordingUUID;
    NSDate *_creationDate;
    NSURL *_composedAVURL;
    NSURL *_composedWaveformURL;
    NSArray *_decomposedFragments;
    NSString *_title;
    double _cachedComposedAVURLDuration;
    NSObject *_composedFragmentsMutex;
}

+ (_Bool)_markCompositionAVURLsBeingModified:(id)arg1;
+ (_Bool)_isSessionWithModificationAccessActiveForComposedAVURL:(id)arg1;
+ (id)_compositionFragmentsFolderForComposedAVURL:(id)arg1;
+ (id)_compositionMetadataURLForComposedAVURL:(id)arg1;
+ (id)_compositionMetadataURLForCompositionBundleURL:(id)arg1;
+ (id)compositionBundleURLForComposedAVURL:(id)arg1;
+ (_Bool)migrateBackupExclusionFlag:(id)arg1;
+ (_Bool)includeInBackup:(id)arg1 error:(id *)arg2;
+ (_Bool)excludeFromBackup:(id)arg1 error:(id *)arg2;
+ (void)deleteFromFilesystem:(id)arg1;
+ (id)compositionWithComposedAVURL:(id)arg1;
+ (id)compositionLoadedForSavedRecordingUUID:(id)arg1;
+ (id)compositionLoadedForSavedRecording:(id)arg1;
+ (id)compositionLoadedForComposedAVURL:(id)arg1 createIfNeeded:(_Bool)arg2;
+ (id)compositionLoadedFromCompositionBundleURL:(id)arg1;
+ (id)_compositionLoadedFromMetadataURL:(id)arg1 savedRecording:(id)arg2;
+ (id)_compositionLoadedFromMetadataURL:(id)arg1 composedAVURL:(id)arg2 savedRecordingUUID:(id)arg3 creationDate:(id)arg4 createIfNeeded:(_Bool)arg5;
+ (id)_unitTestingCompositionWithDecomposedFragments:(id)arg1;
@property(retain, nonatomic) NSObject *composedFragmentsMutex; // @synthesize composedFragmentsMutex=_composedFragmentsMutex;
@property(nonatomic) _Bool readonly; // @synthesize readonly=_readonly;
@property(nonatomic) double cachedComposedAVURLDuration; // @synthesize cachedComposedAVURLDuration=_cachedComposedAVURLDuration;
@property(nonatomic) _Bool cachedComposedAVURLDurationIsValid; // @synthesize cachedComposedAVURLDurationIsValid=_cachedComposedAVURLDurationIsValid;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *decomposedFragments; // @synthesize decomposedFragments=_decomposedFragments;
@property(readonly, nonatomic) NSURL *composedWaveformURL; // @synthesize composedWaveformURL=_composedWaveformURL;
@property(readonly, nonatomic) NSURL *composedAVURL; // @synthesize composedAVURL=_composedAVURL;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *savedRecordingUUID; // @synthesize savedRecordingUUID=_savedRecordingUUID;
- (void).cxx_destruct;
- (id)_calculateComposedFragments;
- (double)_composedDuration;
- (void)recacheComposedDuration;
- (id)compositionByDuplicatingResourcesToDestinationComposedAVURL:(id)arg1;
- (_Bool)saveMetadataToDefaultLocation;
- (id)compositionByReloadingFromDefaultMetadataLocation;
- (void)deleteFromFilesystem;
- (void)enumerateOrphanedFragmentsWithBlock:(CDUnknownBlockType)arg1;
- (id)newRandomFragmentWithInsertionTimeRangeInComposition:(CDStruct_73a5d3ca)arg1 pathExtension:(id)arg2;
- (id)compositionByClippingToComposedTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)compositionByDeletingAndSplittingAtComposedTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)composedFragmentsIntersectingTimeRange:(CDStruct_73a5d3ca)arg1;
- (unsigned long long)estimatedFileSizeOfComposedAssetIncludingRelatedResources:(_Bool)arg1;
- (unsigned long long)_fileSizeOfComposedAssetsIncludingRelatedResources:(_Bool)arg1;
- (unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(_Bool)arg1;
@property(readonly, nonatomic) double composedDuration;
@property(retain, nonatomic) NSArray *composedFragments; // @synthesize composedFragments=_composedFragments;
- (void)setSavedRecordingUUIDFromRecoveredRecordingUUID:(id)arg1;
@property(readonly, nonatomic) _Bool isContentBeingModified;
- (id)dictionaryPListRepresentation;
- (id)initWithDictionaryPListRepresentation:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithSavedRecording:(id)arg1 decomposedFragments:(id)arg2 composedFragments:(id)arg3;
- (id)_initWithComposedAVURL:(id)arg1 savedRecordingUUID:(id)arg2 creationDate:(id)arg3 title:(id)arg4 decomposedFragments:(id)arg5 composedFragments:(id)arg6;
- (id)compositionAsset;
- (id)playableAsset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
