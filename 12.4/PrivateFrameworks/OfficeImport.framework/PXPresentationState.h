//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OCXReadState.h>

@class CXNamespace, NSMutableDictionary, OAVReadState, OAXDrawingState, OAXTableStyleCache, PDPresentation;
@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface PXPresentationState : OCXReadState
{
    NSMutableDictionary *mModelObjects;
    OAXDrawingState *mOfficeArtState;
    OAVReadState *mOAVState;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableDictionary *mSlideURLToIndexMap;
    PDPresentation *mTgtPresentation;
    id <TCCancelDelegate> mCancel;
    CXNamespace *mPXPresentationMLNamespace;
    NSMutableDictionary *mCommentAuthorIdToIndexMap;
}

+ (void)setPptChartGraphicPropertyDefaultBlock:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *commentAuthorIdToIndexMap; // @synthesize commentAuthorIdToIndexMap=mCommentAuthorIdToIndexMap;
@property(retain, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancel;
@property(retain, nonatomic) CXNamespace *PXPresentationMLNamespace; // @synthesize PXPresentationMLNamespace=mPXPresentationMLNamespace;
- (void)setupNSForXMLFormat:(int)arg1;
- (_Bool)isCancelled;
- (void)setTgtPresentation:(id)arg1;
- (id)tgtPresentation;
- (void)setSlideIndex:(long long)arg1 forSlideURL:(id)arg2;
- (long long)slideIndexForSlideURL:(id)arg1;
- (id)tableStyleCache;
- (void)resetOfficeArtState;
- (id)officeArtState;
- (void)setModelObject:(id)arg1 forLocation:(id)arg2;
- (id)modelObjectForLocation:(id)arg1;
- (id)oavState;
- (void)dealloc;
- (id)init;

@end

