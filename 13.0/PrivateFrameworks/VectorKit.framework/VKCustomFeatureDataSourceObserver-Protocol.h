//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@protocol VKCustomFeatureDataSource;

@protocol VKCustomFeatureDataSourceObserver <NSObject>
- (void)dataSource:(id <VKCustomFeatureDataSource>)arg1 didChangeSceneID:(unsigned char)arg2;
- (void)dataSource:(id <VKCustomFeatureDataSource>)arg1 didChangeSceneState:(unsigned char)arg2;
- (void)dataSource:(id <VKCustomFeatureDataSource>)arg1 featuresDidChangeForRect:(CDStruct_02837cd9)arg2;
@end
