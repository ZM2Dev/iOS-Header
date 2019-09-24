//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSEnumerator, NSString;
@protocol TSKModel, TSKModelVisitor;

@protocol TSKModel <NSObject>

@optional
- (void)acceptVisitor:(id <TSKModelVisitor>)arg1;
- (NSString *)modelPathComponentForChild:(id <TSKModel>)arg1;
- (NSEnumerator *)childEnumeratorForUserSearch;
- (NSEnumerator *)childEnumerator;
@end
