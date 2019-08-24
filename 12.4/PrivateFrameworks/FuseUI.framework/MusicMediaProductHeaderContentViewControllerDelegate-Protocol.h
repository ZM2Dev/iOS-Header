//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicMediaProductHeaderContentViewController, UIButton;

@protocol MusicMediaProductHeaderContentViewControllerDelegate <NSObject>

@optional
- (void)mediaProductHeaderContentViewControllerDidUpdateEditableText:(MusicMediaProductHeaderContentViewController *)arg1;
- (void)mediaProductHeaderContentViewController:(MusicMediaProductHeaderContentViewController *)arg1 didSelectCameraButton:(UIButton *)arg2;
- (void)mediaProductHeaderContentViewController:(MusicMediaProductHeaderContentViewController *)arg1 didSelectArtistNameButton:(UIButton *)arg2;
- (void)mediaProductHeaderContentViewController:(MusicMediaProductHeaderContentViewController *)arg1 didSelectShareButton:(UIButton *)arg2;
- (void)mediaProductHeaderContentViewControllerDidTapEdit:(MusicMediaProductHeaderContentViewController *)arg1;
@end
