//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASMovedItem : ASItem
{
    NSString *_srcMsgId;
    NSNumber *_status;
    NSString *_dstMsgId;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
- (void).cxx_destruct;
- (void)setDstMsgId:(id)arg1;
- (id)dstMsgId;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)setSrcMsgId:(id)arg1;
- (id)srcMsgId;

@end
