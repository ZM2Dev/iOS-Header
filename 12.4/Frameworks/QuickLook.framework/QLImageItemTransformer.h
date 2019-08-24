//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/QLItemTransformerProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLImageItemTransformer : NSObject <QLItemTransformerProtocol>
{
}

+ (id)animatableContentTypes;
+ (id)allowedOutputClasses;
- (double)_maximumDimension;
- (id)_contentsFromCGImageSource:(struct CGImageSource *)arg1 context:(id)arg2 scale:(double)arg3;
- (id)transformedContentsFromData:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)transformedContentsFromURL:(id)arg1 context:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
