//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIColor;
@protocol FCHeadlineProviding, FRFeedHeadlineViewStyleType;

@protocol FRFeedHeadlineViewStyleFactoryType <NSObject>
- (id <FRFeedHeadlineViewStyleType>)styleForHeadline:(id <FCHeadlineProviding>)arg1 userInterfaceStyle:(long long)arg2;

@optional
- (id <FRFeedHeadlineViewStyleType>)styleForHeadline:(id <FCHeadlineProviding>)arg1 userInterfaceStyle:(long long)arg2 backgroundColor:(UIColor *)arg3 darkStyleBackgroundColor:(UIColor *)arg4;
@end
