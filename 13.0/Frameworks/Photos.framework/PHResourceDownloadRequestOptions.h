//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHResourceDownloadRequestOptions : NSObject
{
    _Bool _treatLivePhotoAsStill;
    _Bool _dontAllowRAW;
    _Bool _downloadAllAssetResources;
}

@property(nonatomic) _Bool downloadAllAssetResources; // @synthesize downloadAllAssetResources=_downloadAllAssetResources;
@property(nonatomic) _Bool dontAllowRAW; // @synthesize dontAllowRAW=_dontAllowRAW;
@property(nonatomic) _Bool treatLivePhotoAsStill; // @synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill;
- (id)description;

@end
