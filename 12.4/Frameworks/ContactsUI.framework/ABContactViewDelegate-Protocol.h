//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>

@class CNCardGroup, CNContactView;

@protocol ABContactViewDelegate <NSObject, UITableViewDelegate>

@optional
- (void)contactView:(CNContactView *)arg1 didSelectItemAtIndex:(long long)arg2 inGroup:(CNCardGroup *)arg3;
- (double)contactView:(CNContactView *)arg1 heightForItemAtIndex:(long long)arg2 inGroup:(CNCardGroup *)arg3;
- (long long)numberOfGroupsInContactView:(CNContactView *)arg1;
@end
