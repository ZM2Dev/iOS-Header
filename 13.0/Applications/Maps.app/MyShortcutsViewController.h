//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ControlContaineeViewController.h"

#import "DataSourceDelegate-Protocol.h"
#import "HeaderViewDelegate-Protocol.h"
#import "ShortcutActionTypeDelegate-Protocol.h"

@class ContainerHeaderView, MapsThemeTableView, MyShortcutsDataSource, NSString, ShortcutFooterToolBarView, UIView;

__attribute__((visibility("hidden")))
@interface MyShortcutsViewController : ControlContaineeViewController <HeaderViewDelegate, DataSourceDelegate, ShortcutActionTypeDelegate>
{
    UIView *_hideableFooterView;
    ContainerHeaderView *_titleHeaderView;
    ShortcutFooterToolBarView *_footerContentView;
    MapsThemeTableView *_tableView;
    MyShortcutsDataSource *_myShortcutsDataSource;
}

- (void).cxx_destruct;
- (void)view:(id)arg1 requestsShortcutAction:(unsigned long long)arg2;
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;
- (void)dataSourceUpdated:(id)arg1;
- (void)headerViewButtonTapped:(id)arg1;
- (void)loadDataSource;
- (void)_updateFooterInset;
- (void)didChangeLayout:(unsigned long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)willResignCurrent:(_Bool)arg1;
- (void)willBecomeCurrent:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
