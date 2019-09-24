//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/NSObject-Protocol.h>

@class NSArray, NSData, NSIndexSet, NSString, WebItemProviderRegistrationInfoList;

@protocol AbstractPasteboard <NSObject>
@property(copy, nonatomic) NSArray *itemProviders;
@property(readonly, nonatomic) long long numberOfItems;
- (long long)changeCount;
- (NSArray *)valuesForPasteboardType:(NSString *)arg1 inItemSet:(NSIndexSet *)arg2;
- (NSArray *)dataForPasteboardType:(NSString *)arg1 inItemSet:(NSIndexSet *)arg2;
- (NSData *)dataForPasteboardType:(NSString *)arg1;
- (NSArray *)pasteboardTypes;

@optional
@property(readonly, nonatomic) NSArray *allDroppedFileURLs;
@property(readonly, nonatomic) long long numberOfFiles;
- (void)updateSupportedTypeIdentifiers:(NSArray *)arg1;
- (NSArray *)fileUploadURLsAtIndex:(unsigned long long)arg1 fileTypes:(id *)arg2;
- (void)setItems:(NSArray *)arg1;
- (WebItemProviderRegistrationInfoList *)takeRegistrationList;
- (void)stageRegistrationList:(WebItemProviderRegistrationInfoList *)arg1;
@end
