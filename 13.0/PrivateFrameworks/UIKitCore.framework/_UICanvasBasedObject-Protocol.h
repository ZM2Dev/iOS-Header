//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSDictionary, UIWindowScene;

@protocol _UICanvasBasedObject <NSObject>
@property(readonly) NSDictionary *_options;
@property(readonly) UIWindowScene *_intendedCanvas;
- (_Bool)_matchingOptions:(NSDictionary *)arg1;
- (id)_initWithCanvas:(UIWindowScene *)arg1 options:(NSDictionary *)arg2;
@end

