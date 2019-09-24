//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventDetailCell.h>

#import <EventKitUI/UITextViewDelegate-Protocol.h>

@class NSString, NSURL, SGSuggestedEventLaunchInfo, UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface EKEventDetailURLCell : EKEventDetailCell <UITextViewDelegate>
{
    UILabel *_URLTitleView;
    UITextView *_URLView;
    int _lastLayoutPosition;
    NSURL *_url;
    SGSuggestedEventLaunchInfo *_launchInfo;
}

+ (Class)_SGSuggestionsServiceClass;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)_URLView;
- (id)_URLTitleView;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)_layoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutSubviews;
- (void)updateLinkWithLaunchInfo;
- (void)updateLinkWithURL;
- (_Bool)updateLink;
- (_Bool)update;
- (id)initWithEvent:(id)arg1 launchInfo:(id)arg2 editable:(_Bool)arg3 style:(long long)arg4;
- (id)initWithEvent:(id)arg1 url:(id)arg2 editable:(_Bool)arg3 style:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
