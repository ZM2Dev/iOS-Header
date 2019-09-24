//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeToolsUI/PTUISettingsController.h>

@class UINavigationController, _UISettings;

__attribute__((visibility("hidden")))
@interface _PUSettingsController : PTUISettingsController
{
    UINavigationController *_searchNavigationController;
    _UISettings *_rootSettings;
    CDUnknownBlockType _onViewDidDisappearBlock;
    CDUnknownBlockType _dismissButtonFactory;
    CDUnknownBlockType _searchBarButtonItemFactory;
}

@property(copy, nonatomic) CDUnknownBlockType searchBarButtonItemFactory; // @synthesize searchBarButtonItemFactory=_searchBarButtonItemFactory;
@property(copy, nonatomic) CDUnknownBlockType dismissButtonFactory; // @synthesize dismissButtonFactory=_dismissButtonFactory;
@property(copy, nonatomic) CDUnknownBlockType onViewDidDisappearBlock; // @synthesize onViewDidDisappearBlock=_onViewDidDisappearBlock;
@property(readonly, nonatomic) _UISettings *rootSettings; // @synthesize rootSettings=_rootSettings;
- (void).cxx_destruct;
@property(readonly, nonatomic) UINavigationController *searchNavigationController; // @synthesize searchNavigationController=_searchNavigationController;
- (void)handleSearchBarButtonItem:(id)arg1;
- (void)_updateNavigationItemOfViewController:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_invalidateNavigationItems;
- (void)callOnViewDidDisappearBlock;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithRootSettings:(id)arg1;

@end
