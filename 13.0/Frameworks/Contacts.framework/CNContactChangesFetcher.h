//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface CNContactChangesFetcher : NSObject
{
    _Bool _unify;
    NSSet *_identifiers;
    NSSet *_keysToFetch;
}

@property(nonatomic) _Bool unify; // @synthesize unify=_unify;
@property(retain, nonatomic) NSSet *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(retain, nonatomic) NSSet *identifiers; // @synthesize identifiers=_identifiers;
- (void).cxx_destruct;

@end
