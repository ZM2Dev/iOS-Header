//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InstallCoordination/IXAppInstallCoordinator.h>

#import <InstallCoordination/IXCoordinatorWithAppAssetPromise-Protocol.h>
#import <InstallCoordination/IXCoordinatorWithImportance-Protocol.h>
#import <InstallCoordination/IXCoordinatorWithInstallOptions-Protocol.h>

@class NSString;

@interface IXPromotingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithImportance>
{
}

+ (void)enumerateCoordinatorsUsingBlock:(CDUnknownBlockType)arg1;
+ (_Bool)enumerateCoordinatorsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)existingCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;
+ (id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(_Bool)arg3 created:(_Bool *)arg4 error:(id *)arg5;
- (id)validInstallTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasAppAssetPromise;
@property(readonly, nonatomic) _Bool hasInstallOptions;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
