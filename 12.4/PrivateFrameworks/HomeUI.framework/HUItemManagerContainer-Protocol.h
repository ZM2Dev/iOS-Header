//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFItemManager, NSString;

@protocol HUItemManagerContainer <NSObject>
+ (unsigned long long)updateMode;
@property(readonly, nonatomic) HFItemManager *itemManager;
- (void)recursivelyDisableItemUpdates:(_Bool)arg1 withReason:(NSString *)arg2;
@end
