//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath;

@interface FRCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    _Bool _dimAndShrinkElements;
    NSIndexPath *_indexPathOfDraggingItem;
    double _oldWidth;
}

@property(nonatomic) double oldWidth; // @synthesize oldWidth=_oldWidth;
@property(retain, nonatomic) NSIndexPath *indexPathOfDraggingItem; // @synthesize indexPathOfDraggingItem=_indexPathOfDraggingItem;
@property(nonatomic) _Bool dimAndShrinkElements; // @synthesize dimAndShrinkElements=_dimAndShrinkElements;
- (void).cxx_destruct;
- (id)init;

@end
