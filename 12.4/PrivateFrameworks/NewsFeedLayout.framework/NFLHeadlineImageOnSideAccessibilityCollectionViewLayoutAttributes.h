//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NFLHeadlineCollectionViewLayoutAttributes.h>

@class NSString;

@interface NFLHeadlineImageOnSideAccessibilityCollectionViewLayoutAttributes : NFLHeadlineCollectionViewLayoutAttributes
{
    NSString *_titleFontName;
    double _titleFontSize;
    double _titleLineHeight;
    struct _NSRange _titleNextToImageRange;
}

@property(nonatomic) struct _NSRange titleNextToImageRange; // @synthesize titleNextToImageRange=_titleNextToImageRange;
- (void)setExcerptLineHeight:(double)arg1;
- (double)excerptLineHeight;
- (void)setExcerptFontSize:(double)arg1;
- (double)excerptFontSize;
- (void)setExcerptFontName:(id)arg1;
- (id)excerptFontName;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect titleBellowImageFrame;
@property(nonatomic) struct CGRect titleNextToImageFrame;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2;
- (id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1;

@end
