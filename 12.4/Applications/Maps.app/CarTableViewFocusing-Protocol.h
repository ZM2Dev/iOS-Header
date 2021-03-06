//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol CarFocusIdentifier, NSCopying, UIFocusItem;

@protocol CarTableViewFocusing <NSObject>
- (id <CarFocusIdentifier>)identifierForFocusItem:(id <UIFocusItem>)arg1 withKey:(id <NSCopying>)arg2;
- (id <UIFocusItem>)focusItemForIdentifier:(id <CarFocusIdentifier>)arg1 withKey:(id <NSCopying>)arg2;
- (id <UIFocusItem>)firstFocusItemIfVisible;
@end

