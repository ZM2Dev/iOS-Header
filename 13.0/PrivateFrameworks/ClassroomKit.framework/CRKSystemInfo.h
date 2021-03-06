//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface CRKSystemInfo : NSObject
{
    NSString *_buildVersion;
    NSString *_systemVersion;
}

+ (id)sharedSystemInfo;
@property(readonly, copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(readonly, copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *bootDate;
@property(readonly, nonatomic) unsigned long long platform;
- (void)populateVersions;
- (id)init;

@end

