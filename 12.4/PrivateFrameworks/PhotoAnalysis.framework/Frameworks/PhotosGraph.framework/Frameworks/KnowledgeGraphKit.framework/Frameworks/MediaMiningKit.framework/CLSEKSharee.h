//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSCoding-Protocol.h>

@class NSString;

@interface CLSEKSharee : NSObject <NSCoding>
{
    _Bool _isCurrentUserForSharing;
    _Bool _isCurrentUserForScheduling;
    NSString *_emailAddress;
    NSString *_name;
    NSString *_UUID;
}

@property(readonly) _Bool isCurrentUserForScheduling; // @synthesize isCurrentUserForScheduling=_isCurrentUserForScheduling;
@property(readonly) _Bool isCurrentUserForSharing; // @synthesize isCurrentUserForSharing=_isCurrentUserForSharing;
@property(readonly) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKSharee:(id)arg1;

@end
