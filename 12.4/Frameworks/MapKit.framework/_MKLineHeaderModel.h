//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _MKLineHeaderModel : NSObject
{
    NSMutableArray *_tokens;
    _Bool _shouldUseEmptyPlaceholder;
    NSDictionary *_fontAttribute;
    CDUnknownBlockType _colorProvider;
}

@property(nonatomic) _Bool shouldUseEmptyPlaceholder; // @synthesize shouldUseEmptyPlaceholder=_shouldUseEmptyPlaceholder;
@property(copy, nonatomic) CDUnknownBlockType colorProvider; // @synthesize colorProvider=_colorProvider;
@property(copy, nonatomic) NSDictionary *fontAttribute; // @synthesize fontAttribute=_fontAttribute;
- (void).cxx_destruct;
- (id)description;
- (id)_placeCardHeaderSeparatorString;
- (id)contentAttributedString;
- (void)removeToken:(id)arg1;
- (void)insertToken:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addToken:(id)arg1;
- (id)init;

@end
