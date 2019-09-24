//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MapsUICollectionViewDiffableDataSourceCellProviding-Protocol.h"
#import "RAPPhotoCollectionViewCellDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, RAPCommentQuestion, UICollectionView, UICollectionViewCell, UICollectionViewDiffableDataSource, UIView, UIViewController;
@protocol RAPPhotoCarouselViewModelDelegate;

__attribute__((visibility("hidden")))
@interface RAPPhotoCarouselViewModel : NSObject <MapsUICollectionViewDiffableDataSourceCellProviding, RAPPhotoCollectionViewCellDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    RAPCommentQuestion *_question;
    id <RAPPhotoCarouselViewModelDelegate> _delegate;
    UICollectionViewCell *_addCell;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    UICollectionView *_collectionView;
    UIViewController *_presentingViewController;
}

@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIView *anchoringView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;
- (void)_removePhotoForIdentifier:(id)arg1;
- (id)_photoForIdentifier:(id)arg1;
- (void)photoCellDidCancel:(id)arg1;
- (id)initWithQuestion:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
