//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MRDBrowsableContentAPICoordinator : NSObject
{
    NSMutableDictionary *_persistenceDictionary;
}

- (void).cxx_destruct;
- (id)applicationsSupportingAPIs:(unsigned int)arg1;
- (void)setSupportedAPIs:(unsigned int)arg1 forApplication:(id)arg2;
- (unsigned int)supportedAPIsForApplication:(id)arg1;
- (id)init;

@end
