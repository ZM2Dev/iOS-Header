//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@protocol NCNotificationListCollectionViewDelegate;

@interface NCNotificationListCollectionView : UICollectionView
{
    id <NCNotificationListCollectionViewDelegate> _listDelegate;
}

@property(nonatomic) __weak id <NCNotificationListCollectionViewDelegate> listDelegate; // @synthesize listDelegate=_listDelegate;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;

@end

