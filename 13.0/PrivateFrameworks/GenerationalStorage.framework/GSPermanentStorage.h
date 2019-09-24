//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GenerationalStorage/GSAdditionStoring-Protocol.h>
#import <GenerationalStorage/GSAdditionStoringPrivate-Protocol.h>

@class GSDocumentIdentifier, GSStagingPrefix, NSData, NSURL;
@protocol NSCopying><NSSecureCoding;

@interface GSPermanentStorage : NSObject <GSAdditionStoringPrivate, GSAdditionStoring>
{
    GSDocumentIdentifier *_documentID;
    GSStagingPrefix *_stagingPrefix;
    NSURL *_documentURL;
    unsigned long long _remoteID;
    unsigned long long _storageID;
    NSData *_pubExtension;
    NSData *_privExtension;
    long long _pubHandle;
    long long _privHandle;
}

+ (id)storageIDForItemAtURL:(id)arg1 error:(id *)arg2;
+ (id)storagePrefixForFileDescriptor:(int)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long storageID; // @synthesize storageID=_storageID;
@property(readonly, nonatomic) id <NSCopying><NSSecureCoding> persistentIdentifier; // @synthesize persistentIdentifier=_documentID;
@property(retain, nonatomic) GSStagingPrefix *stagingPrefix; // @synthesize stagingPrefix=_stagingPrefix;
@property(retain) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (void).cxx_destruct;
- (_Bool)transferToItemAtURL:(id)arg1 error:(id *)arg2;
- (void)removeAllAdditionsForNamespaces:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAdditions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct NSEnumerator *)enumeratorForAdditionsInNameSpace:(id)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4;
- (id)additionsWithNames:(id)arg1 inNameSpace:(id)arg2 error:(id *)arg3;
- (id)additionWithName:(id)arg1 inNameSpace:(id)arg2 error:(id *)arg3;
- (_Bool)replaceDocumentWithContentsOfItemAtURL:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id *)arg3 error:(id *)arg4;
- (_Bool)replaceDocumentWithContentsOfAddition:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id *)arg3 error:(id *)arg4;
- (void)createAdditionStagedAtURL:(id)arg1 creationInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)prepareAdditionCreationWithItemAtURL:(id)arg1 byMoving:(_Bool)arg2 creationInfo:(id)arg3 error:(id *)arg4;
- (void)cleanupStagingURL:(id)arg1;
- (id)URLforReplacingItemWithError:(id *)arg1;
- (id)stagingURLforCreatingAdditionWithError:(id *)arg1;
- (_Bool)mergeAdditionUserInfo:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (id)setAdditionNameSpace:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (_Bool)setAdditionDisplayName:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (_Bool)setAdditionOptions:(id)arg1 value:(unsigned long long)arg2 error:(id *)arg3;
- (id)getAdditionDictionary:(id)arg1 error:(id *)arg2;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (void)_invalidate;
- (void)_connectionWithDaemonWasLost;
@property(readonly, nonatomic) long long remoteID;
- (_Bool)_refreshRemoteIDWithFileDescriptor:(int)arg1 error:(id *)arg2;
@property(retain) NSData *privExtension;
@property(retain) NSData *pubExtension;
- (id)initWithFileDescriptor:(int)arg1 documentID:(id)arg2 forItemAtURL:(id)arg3 error:(id *)arg4;
- (id)init;
@property(readonly, nonatomic) GSDocumentIdentifier *documentID;

@end
