//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/PKPaletteViewPositionObserving-Protocol.h>

@class NSUndoManager, PKPaletteView;

@protocol PKPaletteViewDelegate <PKPaletteViewPositionObserving>
- (void)paletteViewDidToggleRuler:(PKPaletteView *)arg1;
- (void)paletteViewSelectedToolInkDidChange:(PKPaletteView *)arg1;
- (NSUndoManager *)paletteViewUndoManager:(PKPaletteView *)arg1;
@end
