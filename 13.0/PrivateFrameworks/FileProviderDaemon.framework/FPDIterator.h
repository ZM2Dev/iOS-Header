//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface FPDIterator : NSObject
{
    _Bool _skipMaterializedTreeTraversal;
    _Bool _shouldDecorateItems;
    NSError *_error;
}

+ (id)iteratorForLocator:(id)arg1 provider:(id)arg2;
+ (id)iteratorForLocator:(id)arg1 manager:(id)arg2;
@property(nonatomic) _Bool shouldDecorateItems; // @synthesize shouldDecorateItems=_shouldDecorateItems;
@property(nonatomic) _Bool skipMaterializedTreeTraversal; // @synthesize skipMaterializedTreeTraversal=_skipMaterializedTreeTraversal;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long numFoldersPopped;
@property(readonly, nonatomic) _Bool done;
- (id)nextItem;
- (id)nextWithError:(id *)arg1;

@end
