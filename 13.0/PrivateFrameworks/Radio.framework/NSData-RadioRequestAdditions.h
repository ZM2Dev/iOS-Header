//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (RadioRequestAdditions)
+ (id)dataForRadioRequestParameters:(id)arg1 protocolVersion:(int)arg2 isAsynchronousBackgroundRequest:(_Bool)arg3 error:(id *)arg4;
+ (id)dataForRadioRequestParameters:(id)arg1 isAsynchronousBackgroundRequest:(_Bool)arg2 error:(id *)arg3;
- (id)propertyListForRadioResponseReturningError:(id *)arg1 unparsedResponseDictionary:(id *)arg2;
- (id)propertyListForRadioResponseReturningError:(id *)arg1;
@end
