//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRouteStep, MNTransitInstruction, NSArray, UIColor, UIImage;
@protocol MKArtworkImageSource;

__attribute__((visibility("hidden")))
@interface TransitDirectionsListItem : NSObject
{
    MNTransitInstruction *_transitInstruction;
    long long _type;
    NSArray *_majorFormattedStrings;
    UIImage *_majorStringImage;
    NSArray *_minorFormattedStrings;
    UIImage *_minorStringImage;
    NSArray *_tertiaryFormattedStrings;
    UIColor *_fromLineColor;
    UIColor *_toLineColor;
    UIColor *_alternateFromLineColor;
    UIColor *_alternateToLineColor;
    NSArray *_composedRouteSteps;
    NSArray *_composedRouteStepsDisplayedOnMap;
    TransitDirectionsListItem *_parentItem;
    NSArray *_postTertiaryItems;
    NSArray *_footerItems;
}

@property(copy, nonatomic) NSArray *footerItems; // @synthesize footerItems=_footerItems;
@property(copy, nonatomic) NSArray *postTertiaryItems; // @synthesize postTertiaryItems=_postTertiaryItems;
@property(nonatomic) __weak TransitDirectionsListItem *parentItem; // @synthesize parentItem=_parentItem;
@property(copy, nonatomic) NSArray *composedRouteStepsDisplayedOnMap; // @synthesize composedRouteStepsDisplayedOnMap=_composedRouteStepsDisplayedOnMap;
@property(copy, nonatomic) NSArray *composedRouteSteps; // @synthesize composedRouteSteps=_composedRouteSteps;
@property(retain, nonatomic) UIColor *alternateToLineColor; // @synthesize alternateToLineColor=_alternateToLineColor;
@property(retain, nonatomic) UIColor *alternateFromLineColor; // @synthesize alternateFromLineColor=_alternateFromLineColor;
@property(retain, nonatomic) UIColor *toLineColor; // @synthesize toLineColor=_toLineColor;
@property(retain, nonatomic) UIColor *fromLineColor; // @synthesize fromLineColor=_fromLineColor;
@property(copy, nonatomic) NSArray *tertiaryFormattedStrings; // @synthesize tertiaryFormattedStrings=_tertiaryFormattedStrings;
@property(copy, nonatomic) UIImage *minorStringImage; // @synthesize minorStringImage=_minorStringImage;
@property(copy, nonatomic) NSArray *minorFormattedStrings; // @synthesize minorFormattedStrings=_minorFormattedStrings;
@property(copy, nonatomic) UIImage *majorStringImage; // @synthesize majorStringImage=_majorStringImage;
@property(copy, nonatomic) NSArray *majorFormattedStrings; // @synthesize majorFormattedStrings=_majorFormattedStrings;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) MNTransitInstruction *transitInstruction; // @synthesize transitInstruction=_transitInstruction;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *subItems;
- (id)formattedStringsForType:(long long)arg1;
- (CDStruct_02837cd9)mergedMapRect:(CDStruct_02837cd9)arg1;
@property(readonly, nonatomic) GEOComposedRouteStep *matchingRouteStep;
- (id)imageSourceForNavState:(long long)arg1;
@property(readonly, nonatomic) _Bool selectable;
- (id)description;
- (id)initWithInstructions:(id)arg1;
- (id)_dimmedDefaultImageSource;
@property(readonly, nonatomic) id <MKArtworkImageSource> dimmedDefaultImageSource;

@end
