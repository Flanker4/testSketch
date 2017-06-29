//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSStyleFill.h"

#import "MSStyleFill.h"

@class MSImageData, NSObject<NSCopying,NSCoding>, NSString;

@interface MSStyleFill : _MSStyleFill <MSStyleFill>
{
}

+ (id)defaultStylePartForStyle:(id)arg1;
+ (id)defaultFillColor;
+ (id)keyPathsForValuesAffectingInterfaceOpacity;
- (id)NSImage;
- (void)setOpacity:(double)arg1;
- (BOOL)hasOpacity;
- (void)setPatternTileScale:(double)arg1;
- (void)performInitEmptyObject;
- (id)topViewForColorInspector:(id)arg1;
- (id)parentStyle;
@property(nonatomic) double interfaceOpacity;
- (id)CSSAttributeString;

// Remaining properties
@property(readonly, nonatomic) id <MSColor> colorGeneric;
@property(readonly, nonatomic) id <MSGraphicsContextSettings> contextSettingsGeneric;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long fillType;
@property(readonly, nonatomic) id <MSGradient> gradientGeneric;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MSImageData *image;
@property(readonly, nonatomic) BOOL isEnabled;
@property(readonly, nonatomic) long long noiseIndex;
@property(readonly, nonatomic) double noiseIntensity;
@property(readonly, copy, nonatomic) NSObject<NSCopying,NSCoding> *objectID;
@property(readonly, nonatomic) long long patternFillType;
@property(readonly, nonatomic) double patternTileScale;
@property(readonly) Class superclass;

@end
