//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSSet, NSString;

@protocol _UICollectionCompositionalLayoutSolverResolveResult <NSObject>
@property(readonly, nonatomic) struct CGSize contentSizeAdjustment;
@property(readonly, nonatomic) struct CGPoint contentOffsetAdjustment;
- (NSSet *)indexPathsForDeletedDecorationsForElementKind:(NSString *)arg1;
- (NSSet *)indexPathsForDeletedSupplememtariesForElementKind:(NSString *)arg1;
- (NSSet *)indexPathsForInsertedDecorationsForElementKind:(NSString *)arg1;
- (NSSet *)indexPathsForInsertedSupplememtariesForElementKind:(NSString *)arg1;
@end
