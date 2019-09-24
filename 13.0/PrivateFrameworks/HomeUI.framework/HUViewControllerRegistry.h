//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HUViewControllerRegistry : NSObject
{
    NSMutableDictionary *_viewControllerClassesByIdentifier;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *viewControllerClassesByIdentifier; // @synthesize viewControllerClassesByIdentifier=_viewControllerClassesByIdentifier;
- (void).cxx_destruct;
- (void)registerViewControllerClass:(Class)arg1 forIdentifier:(id)arg2;
- (Class)viewControllerClassForIdentifier:(id)arg1;
- (id)init;

@end
