//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPCopying-Protocol.h>

@class NSString, TSDCommentStorage, TSKFormat, TSSStyle, TSTCellSpec, TSTConditionalStyleSet, TSTImportWarningSet, TSTPopUpMenuModel, TSUCustomFormat, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSTTableDataObject : NSObject <TSPCopying>
{
    unsigned int _refCount;
    unsigned long long _byteSizeForArchiving;
}

+ (void)loadObjectFromArchive:(const struct TableDataList_ListEntry *)arg1 listType:(int)arg2 unarchiver:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)objectWithRefCount:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int refCount; // @synthesize refCount=_refCount;
@property(readonly, nonatomic) TSSStyle *style; // @dynamic style;
@property(readonly, nonatomic) NSString *string; // @dynamic string;
@property(readonly, nonatomic) TSWPStorage *richTextStorage; // @dynamic richTextStorage;
@property(readonly, nonatomic) TSTPopUpMenuModel *popUpMenuModel; // @dynamic popUpMenuModel;
@property(readonly, nonatomic) TSTImportWarningSet *importWarningSet; // @dynamic importWarningSet;
@property(readonly, nonatomic) TSWPStorage *formulaError; // @dynamic formulaError;
@property(readonly, nonatomic) TSTCellSpec *cellSpec; // @dynamic cellSpec;
@property(readonly, nonatomic) TSKFormat *format; // @dynamic format;
@property(readonly, nonatomic) TSUCustomFormat *customFormat; // @dynamic customFormat;
@property(readonly, nonatomic) TSTConditionalStyleSet *conditionalStyleSet; // @dynamic conditionalStyleSet;
@property(readonly, nonatomic) TSDCommentStorage *commentStorage; // @dynamic commentStorage;
- (id)copyWithContext:(id)arg1;
- (unsigned long long)estimateByteSize;
@property(readonly, nonatomic) unsigned long long byteSizeForArchiving; // @synthesize byteSizeForArchiving=_byteSizeForArchiving;
- (void)addReferencesFromObject:(id)arg1;
- (_Bool)dropReferences:(unsigned int)arg1;
- (_Bool)dropReference;
- (void)takeReferences:(unsigned int)arg1;
- (void)takeReference;
- (void)encodeToArchive:(struct TableDataList_ListEntry *)arg1 key:(unsigned int)arg2 archiver:(id)arg3;
- (void)loadFromArchive:(const struct TableDataList_ListEntry *)arg1 unarchiver:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned int)sharedLoadFromArchive:(const struct TableDataList_ListEntry *)arg1;
- (id)initWithRefCount:(unsigned int)arg1;
- (void)p_sharedInitWithRefCount:(unsigned int)arg1;

@end
