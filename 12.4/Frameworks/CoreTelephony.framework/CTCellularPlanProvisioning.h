//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient;

@interface CTCellularPlanProvisioning : NSObject
{
    CoreTelephonyClient *_client;
}

- (void).cxx_destruct;
- (void)addPlanWith:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)supportsCellularPlan;
- (id)init;

@end
