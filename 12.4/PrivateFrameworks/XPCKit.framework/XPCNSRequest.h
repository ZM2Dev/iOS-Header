//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, XPCRequest;
@protocol NSCoding;

@interface XPCNSRequest : NSObject
{
    id <NSCoding> _message;
    NSData *_data;
    XPCRequest *_request;
}

@property(readonly, retain, nonatomic) XPCRequest *request; // @synthesize request=_request;
@property(readonly, retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, retain, nonatomic) id <NSCoding> message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)sendReply:(id)arg1;
- (id)initWithXPCRequest:(id)arg1;

@end
