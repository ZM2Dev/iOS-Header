//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol ACXRemoteAppListObserver <NSObject>
- (void)resyncCompleted;
- (void)applicationsRemoved:(NSArray *)arg1;
- (void)applicationsUpdated:(NSArray *)arg1;
- (void)applicationsAdded:(NSArray *)arg1;
@end
