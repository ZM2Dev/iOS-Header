//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UITextInputTraits;

@protocol UIRecentsInputViewControllerDelegate <NSObject>
- (UITextInputTraits *)textInputTraits;
- (void)switchToKeyboard;
- (void)didSelectRecentInput;
@end
