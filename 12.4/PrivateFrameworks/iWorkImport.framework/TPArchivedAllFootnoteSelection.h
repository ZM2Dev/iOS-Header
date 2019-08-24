//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TPAllFootnoteSelection;

__attribute__((visibility("hidden")))
@interface TPArchivedAllFootnoteSelection : TSPObject <TSKArchivedSelection>
{
    TPAllFootnoteSelection *_selection;
}

@property(retain, nonatomic) TPAllFootnoteSelection *selection; // @synthesize selection=_selection;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
