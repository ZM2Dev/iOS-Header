//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/HFMediaObjectObserver-Protocol.h>
#import <Home/HFMediaSessionObserver-Protocol.h>
#import <Home/HFMediaValueSource-Protocol.h>

@class NSError, NSMutableArray, NSString;
@protocol HFHomeKitObject, HFMediaProfileContainer;

@interface HFMediaValueManager : NSObject <HFMediaObjectObserver, HFMediaSessionObserver, HFMediaValueSource, HFHomeKitItemProtocol>
{
    NSError *_cachedPlaybackStateWriteError;
    id <HFMediaProfileContainer> _mediaProfileContainer;
    NSMutableArray *_transactionStack;
}

@property(retain, nonatomic) NSMutableArray *transactionStack; // @synthesize transactionStack=_transactionStack;
@property(readonly, nonatomic) __weak id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property(readonly, nonatomic) NSError *cachedPlaybackStateWriteError; // @synthesize cachedPlaybackStateWriteError=_cachedPlaybackStateWriteError;
- (void).cxx_destruct;
- (void)_notifyDelegatesFailedToUpdatePlaybackStateWithError:(id)arg1 mediaSession:(id)arg2;
- (void)_notifyDelegatesWillUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;
- (void)_notifyDelegatesDidUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;
- (void)_updateLastPlaybackState:(long long)arg1 sender:(SEL)arg2 notifyWillUpdate:(_Bool)arg3 notifyDidUpdate:(_Bool)arg4;
- (void)_updateCachedPlaybackStateWriteError:(id)arg1 operationType:(id)arg2 notifyDelegates:(_Bool)arg3;
- (void)_clearCachedPlaybackStateWriteErrorWithReason:(id)arg1 notifyDelegates:(_Bool)arg2;
- (void)mediaObject:(id)arg1 didUpdateMediaSession:(id)arg2;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (id)writePlaybackState:(long long)arg1;
- (long long)lastPlaybackStateForProfile;
@property(readonly, nonatomic) _Bool hasPendingWrites;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

