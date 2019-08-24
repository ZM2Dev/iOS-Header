//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <QuartzCore/EAGLDrawable-Protocol.h>

@class NSDictionary;

@interface CAEAGLLayer : CALayer <EAGLDrawable>
{
    struct _CAEAGLNativeWindow *_win;
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
@property(copy) NSDictionary *drawableProperties;
@property _Bool presentsWithTransaction;
- (void)_didCommitLayer:(struct Transaction *)arg1;
- (void)_display;
- (_Bool)_defersDidBecomeVisiblePostCommit;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (void)dealloc;
@property(readonly) struct _EAGLWindowObject *nativeWindow;
- (void)didChangeValueForKey:(id)arg1;
- (_Bool)shouldArchiveValueForKey:(id)arg1;
@property double drawableTimeoutSeconds;
@property double inputTime;
@property _Bool lowLatency;
@property unsigned long long maximumDrawableCount;
@property(getter=isAsynchronous) _Bool asynchronous;
- (void)discardContents;
- (_Bool)isDrawableAvailableInternal;
- (_Bool)isDrawableAvailable;

@end
