//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKPlayer.h>

@class CNContact;

@interface GKPlayer (UIPrivate)
+ (void)preloadImagesForPlayers:(id)arg1 size:(long long)arg2;
+ (id)monogramQueue;
+ (long long)sizeForPhotoSize:(long long)arg1;
- (void)loadPlayerContactForAvatarControllerWithImageSize:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)mutableContactFromDisplayNameComponents;
- (void)clearInMemoryCachedAvatars;
- (void)playerAvatarImageWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)monogramImageWithPhotoSize:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)renderMonogramImageWithPhotoSize:(long long)arg1 monogramString:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)avatarImageRenderer;
- (id)renderingScopeForPhotoSize:(long long)arg1;
- (id)placeholderImageWithPhotoSize:(long long)arg1;
- (id)stringForMonogram;
- (id)displayNameComponents;
- (id)photoURLForSize:(long long)arg1;
- (void)_loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) CNContact *contact;
- (id)initWithContact:(id)arg1;
@end

