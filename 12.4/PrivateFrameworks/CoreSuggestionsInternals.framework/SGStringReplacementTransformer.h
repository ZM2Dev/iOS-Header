//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSString;

@interface SGStringReplacementTransformer : NSObject <PMLTransformerProtocol>
{
    NSString *_target;
    NSString *_replacement;
}

+ (id)withTarget:(id)arg1 replacement:(id)arg2;
- (void).cxx_destruct;
- (id)transform:(id)arg1;

@end
