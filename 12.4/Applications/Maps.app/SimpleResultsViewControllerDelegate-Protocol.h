//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SearchResult, SimpleResultsViewController, VKLabelMarker;

@protocol SimpleResultsViewControllerDelegate <NSObject>
- (void)simpleResultsViewContoller:(SimpleResultsViewController *)arg1 selectClusteredLabelMarker:(VKLabelMarker *)arg2;
- (void)simpleResultsViewContoller:(SimpleResultsViewController *)arg1 selectSearchResult:(SearchResult *)arg2;
@end
