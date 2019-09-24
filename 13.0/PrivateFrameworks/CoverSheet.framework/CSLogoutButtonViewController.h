//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class CSVibrantWallpaperButton;
@protocol CSUserSessionControlling, CSWallpaperColorProvider, CSWallpaperViewProviding;

@interface CSLogoutButtonViewController : CSCoverSheetViewControllerBase
{
    id <CSUserSessionControlling> _userSessionController;
    id <CSWallpaperViewProviding> _wallpaperViewProvider;
    id <CSWallpaperColorProvider> _wallpaperColorProvider;
}

@property(nonatomic) __weak id <CSWallpaperColorProvider> wallpaperColorProvider; // @synthesize wallpaperColorProvider=_wallpaperColorProvider;
@property(nonatomic) __weak id <CSWallpaperViewProviding> wallpaperViewProvider; // @synthesize wallpaperViewProvider=_wallpaperViewProvider;
@property(nonatomic) __weak id <CSUserSessionControlling> userSessionController; // @synthesize userSessionController=_userSessionController;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)loadView;
@property(readonly, nonatomic) CSVibrantWallpaperButton *button;

@end
