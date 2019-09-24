//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ContaineeViewController.h"

#import "HeaderViewDelegate-Protocol.h"
#import "SharedETACapabilityLevelFetcherObserver-Protocol.h"
#import "SharedTripSuggestionsDataSourceDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, NSTimer, SharedTripSuggestionsDataSource, ShortcutEditSession, UISearchBar, UITableView, UITextField, UIView;

__attribute__((visibility("hidden")))
@interface ContactSearchViewController : ContaineeViewController <UISearchBarDelegate, HeaderViewDelegate, UITableViewDelegate, UITableViewDataSource, SharedTripSuggestionsDataSourceDelegate, SharedETACapabilityLevelFetcherObserver>
{
    UISearchBar *_searchBar;
    UITextField *_searchField;
    NSString *_searchQuery;
    NSTimer *_autocompleteDelayTimer;
    NSMutableDictionary *_destinationsToContactValues;
    NSArray *_contactValues;
    ShortcutEditSession *_shortcutEditSession;
    NSString *_meCardIdentifier;
    _Bool _userInteracted;
    SharedTripSuggestionsDataSource *_suggestionDataSource;
    UIView *_titleHeaderView;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *titleHeaderView; // @synthesize titleHeaderView=_titleHeaderView;
@property(retain, nonatomic) NSArray *contactValues; // @synthesize contactValues=_contactValues;
@property(retain, nonatomic) SharedTripSuggestionsDataSource *suggestionDataSource; // @synthesize suggestionDataSource=_suggestionDataSource;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)performAutocompleteSearch;
- (void)headerViewButtonTapped:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateCapabilityLevelForCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)capabilityLevelsDidUpdate;
- (void)_contactValuesSelected:(id)arg1;
- (void)fetchContacts;
- (void)clear;
- (void)prepopulate;
- (void)_doneAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)loadContaineeHeaderView;
- (id)modalHeaderView;
- (_Bool)updateConstraintsForLayout:(unsigned long long)arg1;
- (void)updateTheme;
- (void)contactsForDisplayDidUpdate;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithShortcutEditSession:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
