//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHChangeRequest.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSManagedObjectID, NSString, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHSuggestionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    PHRelationshipChangeRequestHelper *_keyAssetsHelper;
    PHRelationshipChangeRequestHelper *_representativeAssetsHelper;
}

+ (void)deleteSuggestions:(id)arg1;
+ (id)changeRequestForSuggestion:(id)arg1;
+ (_Bool)canGenerateUUIDWithoutEntitlements;
+ (id)creationRequestForSuggestion;
+ (id)creationRequestForSuggestionWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 keyAssets:(id)arg3 representativeAssets:(id)arg4 creationDate:(id)arg5 relevantUntilDate:(id)arg6 version:(long long)arg7;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *representativeAssetsHelper; // @synthesize representativeAssetsHelper=_representativeAssetsHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *keyAssetsHelper; // @synthesize keyAssetsHelper=_keyAssetsHelper;
- (void).cxx_destruct;
- (void)_calculateAndSetExpungeDate;
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (void)markReactivated;
- (void)markRetired;
- (void)markDeclined;
- (void)markAccepted;
- (void)markActive;
- (void)setStartAndEndDatesWithKeyAssets:(id)arg1 representativeAssets:(id)arg2;
- (void)setFeaturesProperties:(id)arg1;
- (void)setActionProperties:(id)arg1;
- (void)setRepresentativeAssets:(id)arg1;
- (void)setKeyAssets:(id)arg1;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (void)setFeaturesData:(id)arg1;
- (id)featuresData;
- (void)setActionData:(id)arg1;
- (id)actionData;
- (void)setExpungeDate:(id)arg1;
- (id)expungeDate;
- (void)setRelevantUntilDate:(id)arg1;
- (id)relevantUntilDate;
- (void)setActivationDate:(id)arg1;
- (id)activationDate;
- (void)setEndDate:(id)arg1;
- (id)endDate;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (void)setVersion:(long long)arg1;
- (long long)version;
@property(nonatomic) unsigned short notificationState;
- (void)setState:(unsigned short)arg1;
- (unsigned short)state;
- (void)setSubtype:(unsigned short)arg1;
- (unsigned short)subtype;
- (void)setType:(unsigned short)arg1;
- (unsigned short)type;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
@property(readonly, nonatomic) NSString *managedEntityName;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initForNewObject;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedSuggestion;

// Remaining properties
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, nonatomic) CDUnknownBlockType concurrentWorkBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isNewRequest;
@property(readonly, getter=isMutated) _Bool mutated;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly) Class superclass;

@end
