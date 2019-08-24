//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <DocumentManager/DOCNavigationBarOverwriteProtocol-Protocol.h>

@class DOCConcreteLocation, NSString;

@interface DOCSnapshotBrowserViewController : UIViewController <DOCNavigationBarOverwriteProtocol>
{
    _Bool _isTopNavigationItem;
    DOCConcreteLocation *_location;
    NSString *_overriddenTitle;
    NSString *_searchQuery;
}

+ (id)snapshotForBrowser:(id)arg1;
+ (id)snapshotForLocation:(id)arg1;
@property(copy) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property _Bool isTopNavigationItem; // @synthesize isTopNavigationItem=_isTopNavigationItem;
@property(copy) NSString *overriddenTitle; // @synthesize overriddenTitle=_overriddenTitle;
@property(retain) DOCConcreteLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
