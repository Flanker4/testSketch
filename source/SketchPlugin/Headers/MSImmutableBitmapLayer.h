//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableBitmapLayer.h"

#import "MSBitmapLayer.h"

@class MSImageData, NSDictionary, NSObject<NSCopying,NSCoding>, NSString;

@interface MSImmutableBitmapLayer : _MSImmutableBitmapLayer <MSBitmapLayer>
{
}

+ (unsigned long long)traits;
+ (id)defaultName;
- (BOOL)canSkipAdvancedClipForStrokes;
@property(readonly, nonatomic) BOOL hasNineSliceEnabled;
- (id)NSImage;
- (void)performInitWithCoder:(id)arg1;
- (id)possibleOverridesInDocument:(id)arg1 actualOverrides:(id)arg2 skipping:(id)arg3;
- (void)migratePropertiesFromV75OrEarlierWithCoder:(id)arg1;
- (void)migratePropertiesFromV61OrEarlierWithCoder:(id)arg1;
- (void)migratePropertiesFromV59OrEarlierWithCoder:(id)arg1;
- (void)migratePropertiesFromV56OrEarlierWithCoder:(id)arg1;
- (BOOL)shouldRenderInTransparencyLayer;
- (id)addGroupContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3;
- (void)addPathDefinitionToDocument:(id)arg1;
- (id)imageElementWithAttributes:(id)arg1 exporter:(id)arg2;
- (void)addImageElementAttributes:(id)arg1 exporter:(id)arg2;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (BOOL)requiresPathDefinition:(id)arg1;
- (id)svgStyle:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGRect clippingMask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <MSExportOptions> exportOptionsGeneric;
@property(readonly, nonatomic) BOOL fillReplacesImage;
@property(readonly, nonatomic) id <MSRect> frameGeneric;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MSImageData *image;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isSelected;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) long long layerListExpandedType;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL nameIsFixed;
@property(readonly, nonatomic) struct CGRect nineSliceCenterRect;
@property(readonly, nonatomic) struct CGSize nineSliceScale;
@property(readonly, copy, nonatomic) NSObject<NSCopying,NSCoding> *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) NSString *originalObjectID;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) unsigned long long resizingType;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) BOOL shouldBreakMaskChain;
@property(readonly, nonatomic) id <MSStyle> styleGeneric;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;

@end

