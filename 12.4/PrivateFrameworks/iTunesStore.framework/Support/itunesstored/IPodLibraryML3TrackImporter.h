//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPodLibraryML3TrackImporter : NSObject
{
}

- (id)_extendedContentRatingStringForLibraryItem:(id)arg1;
- (id)_currentTrackChapterDataForTrackPid:(long long)arg1 libraryItem:(id)arg2 usingLibrary:(id)arg3;
- (id)_storeArtworkTokenFromLibraryItem:(id)arg1 metadata:(id)arg2;
- (id)_currentTrackMovieInfoFromMetadata:(id)arg1;
- (id)_stringValueForURLValue:(id)arg1;
- (id)_absoluteTimeValueForDateValue:(id)arg1;
- (id)_importPropertiesFromLibraryItem:(id)arg1 fromAccount:(id)arg2 usingLibrary:(id)arg3;
- (_Bool)importLibraryItems:(id)arg1 toMusicLibrary:(id)arg2 importedItemPids:(id)arg3;

@end
