//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSUUID, RTIDocumentState, RTIDocumentTraits, RTITextOperations;
@protocol RTIInputSystemSessionDelegate;

@interface RTIInputSystemSession : NSObject
{
    NSUUID *_uuid;
    RTIDocumentTraits *_documentTraits;
    RTIDocumentState *_documentState;
    RTITextOperations *_textOperations;
    NSHashTable *_extraSessionDelegates;
    id <RTIInputSystemSessionDelegate> _sessionDelegate;
}

@property(nonatomic) __weak id <RTIInputSystemSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(retain, nonatomic) NSHashTable *extraSessionDelegates; // @synthesize extraSessionDelegates=_extraSessionDelegates;
@property(retain, nonatomic) RTITextOperations *textOperations; // @synthesize textOperations=_textOperations;
@property(retain, nonatomic) RTIDocumentState *documentState; // @synthesize documentState=_documentState;
@property(retain, nonatomic) RTIDocumentTraits *documentTraits; // @synthesize documentTraits=_documentTraits;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)enumerateSessionDelegatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeSessionDelegate:(id)arg1;
- (void)addSessionDelegate:(id)arg1;
- (void)_applyLocalTextOperations:(id)arg1 toDocumentState:(id)arg2;
- (void)applyLocalTextOperations:(id)arg1 toDocumentState:(id)arg2;
- (void)flushOperations;
@property(readonly, nonatomic) RTITextOperations *_textOperations;
- (void)_createTextOperationsIfNecessary;

@end

