//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIFocusDebuggerOutput-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusDebuggerStringOutput : NSObject <UIFocusDebuggerOutput>
{
    NSString *_outputString;
}

+ (id)outputWithString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
