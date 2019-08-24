//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString, WebScriptObject;

@interface SUScriptEventListener : NSObject
{
    WebScriptObject *_callback;
    NSLock *_lock;
    NSString *_name;
    _Bool _useCapture;
}

@property _Bool shouldUseCapture; // @synthesize shouldUseCapture=_useCapture;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain) WebScriptObject *callback; // @synthesize callback=_callback;
- (void)dealloc;
- (id)init;

@end
