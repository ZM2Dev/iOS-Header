//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

@protocol BackspaceDelegate;

@interface RMSTextField : UITextField
{
    id <BackspaceDelegate> _backspaceDelegate;
}

@property(nonatomic) __weak id <BackspaceDelegate> backspaceDelegate; // @synthesize backspaceDelegate=_backspaceDelegate;
- (void).cxx_destruct;
- (void)deleteBackward;
- (_Bool)keyboardInputShouldDelete:(id)arg1;

@end

