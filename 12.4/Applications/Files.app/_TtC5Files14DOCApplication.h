//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import "DOCTabbedBrowserViewControllerDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC5Files14DOCApplication : UIApplication <DOCTabbedBrowserViewControllerDelegate>
{
    MISSING_TYPE *currentTestName;
    MISSING_TYPE *finishedLaunchTest;
    MISSING_TYPE *loadedTabs;
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (void)tabbedBrowserViewController:(id)arg1 didFinishLoadingTab:(unsigned long long)arg2;
- (id)_extendLaunchTest;

@end
