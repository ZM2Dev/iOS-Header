//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHObjectReference.h>

@class NSString;

@interface PHCollectionReference : PHObjectReference
{
    NSString *_transientIdentifier;
    NSString *_transientTitle;
}

+ (id)representedType;
@property(readonly, copy, nonatomic) NSString *transientTitle; // @synthesize transientTitle=_transientTitle;
@property(readonly, copy, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;
- (void).cxx_destruct;
- (id)_transientCollectionInLibrary:(id)arg1;
@property(readonly, nonatomic) _Bool transient;
- (id)dictionaryForReferenceType:(id)arg1;
- (id)initWithDictionary:(id)arg1 referenceType:(id)arg2;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 transientIdentifier:(id)arg3 transientTitle:(id)arg4;

@end
