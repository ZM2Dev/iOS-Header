//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PHAssetCollectionDataSource-Protocol.h>
#import <PhotosUI/PUOneUpAssetTransitionViewController-Protocol.h>
#import <PhotosUI/PUOneUpPhotosSharingTransitionViewController-Protocol.h>
#import <PhotosUI/PUPhotoViewContentHelperDelegate-Protocol.h>
#import <PhotosUI/PUPhotosSharingCollectionViewLayoutDelegate-Protocol.h>
#import <PhotosUI/PUPhotosSharingTransitionViewController-Protocol.h>
#import <PhotosUI/PUScrollViewSpeedometerDelegate-Protocol.h>
#import <PhotosUI/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUI/UICollectionViewDataSource-Protocol.h>
#import <PhotosUI/UICollectionViewDelegate-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSIndexPath, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, PHAsset, PHCachingImageManager, PHFetchResult, PUAssetTransitionInfo, PUPhotoSelectionManager, PUPhotosSharingCollectionViewLayout, PUPhotosSharingTransitionContext, PUPhotosSharingViewControllerSpec, PUScrollViewSpeedometer, PXAssetBadgeManager, PXPhotosDataSource, UICollectionView, UICollectionViewLayout, UITapGestureRecognizer;
@protocol OS_os_log, PUCarouselSharingViewControllerDelegate;

@interface PUCarouselSharingViewController : UIViewController <UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUPhotosSharingCollectionViewLayoutDelegate, PUScrollViewSpeedometerDelegate, PXPhotoLibraryUIChangeObserver, PUPhotoViewContentHelperDelegate, PUPhotosSharingTransitionViewController, PHAssetCollectionDataSource, PUOneUpPhotosSharingTransitionViewController, PUOneUpAssetTransitionViewController>
{
    PUScrollViewSpeedometer *_speedometer;
    NSMutableDictionary *_resultsForAssetCollection;
    NSMutableDictionary *_assetItemsByAssetIdentifier;
    NSMapTable *_indexPathsByOptionView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSIndexPath *_inFlightReferenceIndexPath;
    _Bool _shouldScrollToSelection;
    _Bool _inFlightRotation;
    _Bool _shouldPlayVitalityHintAfterViewDidAppear;
    _Bool _readyForInteraction;
    _Bool __viewInSyncWithModel;
    _Bool __loopingPlaybackAllowed;
    PHFetchResult *_photoCollectionsFetchResult;
    PUPhotoSelectionManager *_photoSelectionManager;
    id <PUCarouselSharingViewControllerDelegate> _delegate;
    PUPhotosSharingViewControllerSpec *_spec;
    UICollectionView *_mainCollectionView;
    PUPhotosSharingCollectionViewLayout *_mainCollectionViewLayout;
    PHCachingImageManager *_cachingImageManager;
    NSMutableSet *__preheatedAssets;
    UICollectionViewLayout *__transitionLayout;
    PUPhotosSharingTransitionContext *_photosSharingTransitionContext;
    PUAssetTransitionInfo *_assetTransitionInfo;
    PUAssetTransitionInfo *_leadingAssetTransitionInfo;
    PUAssetTransitionInfo *_trailingAssetTransitionInfo;
    PHAsset *__lastKnownReferenceAsset;
    NSIndexPath *__lastKnownReferenceIndexPath;
    PXAssetBadgeManager *__badgeManager;
    CDUnknownBlockType __pptOnDidEndScrollingBlock;
    NSMutableArray *__photoViewLoaderBlocks;
    NSMutableArray *__livePhotoViewLoaderBlocks;
    PXPhotosDataSource *_photosDataSource;
    struct CGRect __previousPreheatRect;
}

@property(retain, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property(readonly, nonatomic) NSMutableArray *_livePhotoViewLoaderBlocks; // @synthesize _livePhotoViewLoaderBlocks=__livePhotoViewLoaderBlocks;
@property(readonly, nonatomic) NSMutableArray *_photoViewLoaderBlocks; // @synthesize _photoViewLoaderBlocks=__photoViewLoaderBlocks;
@property(copy, nonatomic, setter=_pptSetOnDidEndScrollingBlock:) CDUnknownBlockType _pptOnDidEndScrollingBlock; // @synthesize _pptOnDidEndScrollingBlock=__pptOnDidEndScrollingBlock;
@property(readonly, nonatomic) PXAssetBadgeManager *_badgeManager; // @synthesize _badgeManager=__badgeManager;
@property(nonatomic, getter=_isLoopingPlaybackAllowed, setter=_setLoopingPlaybackAllowed:) _Bool _loopingPlaybackAllowed; // @synthesize _loopingPlaybackAllowed=__loopingPlaybackAllowed;
@property(retain, nonatomic, setter=_setLastKnownReferenceIndexPath:) NSIndexPath *_lastKnownReferenceIndexPath; // @synthesize _lastKnownReferenceIndexPath=__lastKnownReferenceIndexPath;
@property(retain, nonatomic, setter=_setLastKnownReferenceAsset:) PHAsset *_lastKnownReferenceAsset; // @synthesize _lastKnownReferenceAsset=__lastKnownReferenceAsset;
@property(retain, nonatomic) PUAssetTransitionInfo *trailingAssetTransitionInfo; // @synthesize trailingAssetTransitionInfo=_trailingAssetTransitionInfo;
@property(retain, nonatomic) PUAssetTransitionInfo *leadingAssetTransitionInfo; // @synthesize leadingAssetTransitionInfo=_leadingAssetTransitionInfo;
@property(retain, nonatomic) PUAssetTransitionInfo *assetTransitionInfo; // @synthesize assetTransitionInfo=_assetTransitionInfo;
@property(retain, nonatomic) PUPhotosSharingTransitionContext *photosSharingTransitionContext; // @synthesize photosSharingTransitionContext=_photosSharingTransitionContext;
@property(retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;
@property(retain, nonatomic, setter=_setPreheatedAssets:) NSMutableSet *_preheatedAssets; // @synthesize _preheatedAssets=__preheatedAssets;
@property(nonatomic, setter=_setPreviousPreheatRect:) struct CGRect _previousPreheatRect; // @synthesize _previousPreheatRect=__previousPreheatRect;
@property(readonly, nonatomic) PHCachingImageManager *cachingImageManager; // @synthesize cachingImageManager=_cachingImageManager;
@property(nonatomic, getter=_isViewInSyncWithModel, setter=_setViewInSyncWithModel:) _Bool _viewInSyncWithModel; // @synthesize _viewInSyncWithModel=__viewInSyncWithModel;
@property(retain, nonatomic, setter=_setMainCollectionViewLayout:) PUPhotosSharingCollectionViewLayout *mainCollectionViewLayout; // @synthesize mainCollectionViewLayout=_mainCollectionViewLayout;
@property(retain, nonatomic, setter=_setMainCollectionView:) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property(retain, nonatomic) PUPhotosSharingViewControllerSpec *spec; // @synthesize spec=_spec;
@property(nonatomic, getter=isReadyForInteraction) _Bool readyForInteraction; // @synthesize readyForInteraction=_readyForInteraction;
@property(nonatomic) __weak id <PUCarouselSharingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PUPhotoSelectionManager *photoSelectionManager; // @synthesize photoSelectionManager=_photoSelectionManager;
@property(readonly, nonatomic) PHFetchResult *photoCollectionsFetchResult; // @synthesize photoCollectionsFetchResult=_photoCollectionsFetchResult;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_os_log> *sharingLog;
- (void)photoViewContentHelper:(id)arg1 livePhotoWillBeginPlaybackWithStyle:(long long)arg2;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(CDUnknownBlockType)arg2;
- (id)_badgeTransitionInfosForCell:(id)arg1;
- (id)adjacentVisibleAssetsTransitionInfos;
- (id)referenceAssetTransitionInfo;
- (struct CGRect)oneUpAssetTransitionAssetFinalFrame:(id)arg1;
- (struct CGRect)_frameAtIndexPath:(id)arg1 inView:(id)arg2;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layout:(id)arg1 collectionView:(id)arg2 itemAtIndexPath:(id)arg3 didChangeToVisibleFrame:(struct CGRect)arg4;
- (double)layout:(id)arg1 collectionView:(id)arg2 bottomBadgeInsetforItemAtIndexPath:(id)arg3;
- (struct CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForBadgeViewOfKind:(id)arg3 forItemAtIndexPath:(id)arg4;
- (struct CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)layout:(id)arg1 collectionView:(id)arg2 referenceIndexPathWithOffsetX:(double *)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setHideCellForCurrentReferenceAsset:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)_firstSelectedIndexPath;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updateMainViewAnimated:(_Bool)arg1;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_statusBarFrameWillChange:(id)arg1;
- (void)_processCollectionListChangeNotifications:(id)arg1 singleCollectionNotifications:(id)arg2 needsReloadData:(_Bool)arg3;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)ppt_scrollView;
- (void)ppt_faultInScollViewContentSize;
- (_Bool)ppt_scrollToAssetAtRelativeIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)frameForBadgeOfKind:(id)arg1 forItemFrame:(struct CGRect)arg2 atIndexPath:(id)arg3;
- (void)_updatePreheatedAssets;
- (void)_resetPreheating;
- (id)_optionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (void)setPhotosSharingTransitionLayout:(id)arg1 animated:(_Bool)arg2;
- (void)_updateCellAtIndexPath:(id)arg1 withTransitionInfo:(id)arg2;
- (void)_updateAssetTransitionInfo:(id)arg1;
- (void)setOneUpPhotosSharingTransitionInfo:(id)arg1;
- (void)setOneUpPhotosSharingTransitionContext:(id)arg1;
- (id)transitionCollectionView;
@property(readonly, nonatomic) PHAsset *currentAsset;
- (id)currentIndexPath;
- (void)_setLastKnownReferenceAsset:(id)arg1 indexPath:(id)arg2;
- (void)_updateLastKnownReferenceIndexPath;
- (id)_validIndexPathFromIndexPath:(id)arg1;
- (void)_getMainCollectionViewFrame:(struct CGRect *)arg1 collectionViewLayoutInsets:(struct UIEdgeInsets *)arg2;
- (struct CGRect)_collectionViewContentFrame;
- (void)_handleTapInMainCollectionView:(id)arg1;
- (void)_handleTapAtIndexPath:(id)arg1;
- (void)_playLivePhotoHintIfNeededAtIndexPath:(id)arg1;
- (void)_handleSelectionOption:(id)arg1;
@property(readonly, nonatomic) NSString *localizedSelectionTitle;
- (void)_updateOptionView:(id)arg1 atIndexPath:(id)arg2;
- (void)deselectItemAtIndexPath:(id)arg1;
- (void)selectItemAtIndexPath:(id)arg1;
- (_Bool)isItemAtIndexPathSelected:(id)arg1;
- (_Bool)_isAnyAssetSelected;
- (void)_setSelected:(_Bool)arg1 atIndexPath:(id)arg2 animated:(_Bool)arg3;
- (void)_replaceActivityAssetItem:(id)arg1 withAssetItem:(id)arg2;
- (void)_removeActivityAssetItem:(id)arg1;
- (void)_addActivityAssetItem:(id)arg1;
- (id)_updatedActivityAssetItemsForAssets:(id)arg1;
- (id)currentActivityAssetItems;
- (id)_activityAssetItemForAsset:(id)arg1 createIfNecessary:(_Bool)arg2;
- (void)_handlePhotoViewLoaderBlocks;
- (void)_playVitalityHintAfterViewDidAppear;
- (id)assetsInAssetCollection:(id)arg1;
@property(readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
- (void)_updateVisibleCells;
- (id)_indexPathOfAsset:(id)arg1 sectionHint:(long long)arg2;
- (id)_assetAtIndexPath:(id)arg1;
- (id)_photoCollectionAtIndex:(long long)arg1;
- (unsigned long long)_indexForPhotoCollection:(id)arg1;
- (long long)_numberOfItemsInSection:(long long)arg1;
- (long long)_numberOfSections;
- (id)_indexPathInCollectionView:(id)arg1 closestToContentOffsetX:(double)arg2;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint)arg2;
- (id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1;
- (void)_pageToIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)_handleAnimatedImageResult:(id)arg1 forCell:(id)arg2 asset:(id)arg3 tag:(long long)arg4;
- (void)_handleLoopingVideoRequestResult:(id)arg1 forCell:(id)arg2 asset:(id)arg3 tag:(long long)arg4;
- (void)_handleLivePhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3;
- (void)_handleSchedulingLivePhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3;
- (void)_handleStillPhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3;
- (void)_handleSchedulingStillPhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3;
- (void)_updateAdditionalContentForAsset:(id)arg1 cell:(id)arg2;
- (void)_handleStillImageRequestResult:(id)arg1 info:(id)arg2 forCell:(id)arg3 indexPath:(id)arg4;
- (void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;
- (double)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2;
- (struct CGSize)_sizeForItemAtIndexPath:(id)arg1;
- (void)_getFirstValidIndexPath:(id *)arg1 lastValidIndexPath:(id *)arg2;
- (void)_updateInterfaceForModelReloadAnimated:(_Bool)arg1;
- (_Bool)_shouldShowAsset:(id)arg1;
- (void)dealloc;
- (id)initWithPhotoCollectionsFetchResult:(id)arg1 assetsFetchResultsByAssetCollection:(id)arg2 selection:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
