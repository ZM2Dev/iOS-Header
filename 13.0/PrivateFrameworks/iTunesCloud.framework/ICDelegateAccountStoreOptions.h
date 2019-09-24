//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSString, NSXPCListenerEndpoint;

@interface ICDelegateAccountStoreOptions : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_databasePath;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSString *_serviceName;
    _Bool _singleWriter;
}

+ (_Bool)supportsSecureCoding;
+ (id)singleWriterOptionsWithDatabasePath:(id)arg1;
+ (id)defaultOptionsWithServiceName:(id)arg1;
+ (id)defaultOptionsWithServiceEndpoint:(id)arg1;
@property(copy, nonatomic) NSString *XPCServiceName; // @synthesize XPCServiceName=_serviceName;
@property(retain, nonatomic) NSXPCListenerEndpoint *XPCEndpoint; // @synthesize XPCEndpoint=_listenerEndpoint;
@property(nonatomic, getter=isSingleWriter) _Bool singleWriter; // @synthesize singleWriter=_singleWriter;
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
