//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ControlContaineeViewController.h"

#import "DataSourceDelegate-Protocol.h"
#import "HeaderViewDelegate-Protocol.h"

@class ContainerHeaderView, MapsThemeTableView, MyRecentsDataSource, NSString;

__attribute__((visibility("hidden")))
@interface MyRecentsViewController : ControlContaineeViewController <HeaderViewDelegate, DataSourceDelegate>
{
    ContainerHeaderView *_titleHeaderView;
    MapsThemeTableView *_tableView;
    MyRecentsDataSource *_recentsDataSource;
}

- (void).cxx_destruct;
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;
- (void)dataSourceUpdated:(id)arg1;
- (void)headerViewButtonTapped:(id)arg1;
- (void)loadDataSource;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateHeaderHairline;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
