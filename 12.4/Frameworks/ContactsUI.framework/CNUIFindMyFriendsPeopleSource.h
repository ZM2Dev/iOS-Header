//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNUIPeopleSource-Protocol.h>

@class CNContactStore, CNUIFMFFacade, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNUIFindMyFriendsPeopleSource : NSObject <CNUIPeopleSource>
{
    _Bool _fetching;
    CNUIFMFFacade *_fmfFacade;
    CNContactStore *_contactStore;
    NSArray *_fmfHandles;
    NSArray *_cachedPeople;
}

+ (id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2;
+ (id)sourceKind;
@property(nonatomic) _Bool fetching; // @synthesize fetching=_fetching;
@property(retain, nonatomic) NSArray *cachedPeople; // @synthesize cachedPeople=_cachedPeople;
@property(retain, nonatomic) NSArray *fmfHandles; // @synthesize fmfHandles=_fmfHandles;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNUIFMFFacade *fmfFacade; // @synthesize fmfFacade=_fmfFacade;
- (void).cxx_destruct;
- (CDUnknownBlockType)friendContactFromFriendHandleTransformWithKeysToFetch:(id)arg1;
- (void)fetchFriends;
- (id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2;
- (id)groups;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

