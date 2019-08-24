//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UINavigationController;

__attribute__((visibility("hidden")))
@interface QLNavigationState : NSObject
{
    _Bool _navigationBarHidden;
    _Bool _toolBarHidden;
    _Bool _translucentNavigationBar;
    _Bool _translucentToolbar;
    UINavigationController *_navigationController;
}

@property(retain) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property _Bool translucentToolbar; // @synthesize translucentToolbar=_translucentToolbar;
@property _Bool translucentNavigationBar; // @synthesize translucentNavigationBar=_translucentNavigationBar;
@property _Bool toolBarHidden; // @synthesize toolBarHidden=_toolBarHidden;
@property _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
- (void).cxx_destruct;

@end
