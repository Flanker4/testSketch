//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableTextLayer.h"

#import "MSColorUser.h"
#import "MSFirstLineTypesetterDelegate.h"
#import "MSTextLayer.h"
#import "NSLayoutManagerDelegate.h"

@class MSAttributedString, MSImageData, NSArray, NSAttributedString, NSDictionary, NSFont, NSNumber, NSObject<NSCopying,NSCoding>, NSString;

@interface MSImmutableTextLayer : _MSImmutableTextLayer <MSColorUser, NSLayoutManagerDelegate, MSTextLayer, MSFirstLineTypesetterDelegate>
{
    long long _calculateBaselineOffsetsToken;
    long long _calculateDefaultLineHeightValueToken;
    long long _calculateInfluenceRectForBoundsToken;
    struct CGRect _calculatedInfluenceRectForBounds;
    BOOL _isEditingText;
    NSNumber *_defaultLineHeightValue;
    NSArray *_baselineOffsetsValue;
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
+ (id)defaultName;
@property(readonly, nonatomic) BOOL isEditingText; // @synthesize isEditingText=_isEditingText;
@property(readonly, copy, nonatomic) NSArray *baselineOffsetsValue; // @synthesize baselineOffsetsValue=_baselineOffsetsValue;
@property(readonly, nonatomic) NSNumber *defaultLineHeightValue; // @synthesize defaultLineHeightValue=_defaultLineHeightValue;

- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (BOOL)hasDefaultValues;
@property(readonly, nonatomic) double firstBaselineOffset;
@property(readonly, copy, nonatomic) NSArray *baselineOffsets;
@property(readonly, nonatomic) double lineHeight;
@property(readonly, copy, nonatomic) NSString *stringValue;
@property(readonly, copy, nonatomic) NSAttributedString *attributedStringValue;
- (double)defaultLineHeight:(id)arg1;
@property(readonly, nonatomic) NSFont *font;
@property(readonly, nonatomic) double fontSize;
@property(readonly, nonatomic) unsigned long long textAlignment;
- (id)usedFontNames;
- (double)baselineAdjustmentForLayoutManager:(id)arg1;
- (double)startingPositionOnPath:(id)arg1;
- (id)bezierPathWithParentGroup:(id)arg1 layoutManager:(id)arg2;
- (id)bezierPathFromGlyphsInBoundsWithParentGroup:(id)arg1 layoutManager:(id)arg2;
- (id)firstUnderlyingShapePathWithParentGroup:(id)arg1 usingCache:(id)arg2;
- (id)shapeToUseForTextOnPathWithParentGroup:(id)arg1;
@property(readonly, nonatomic) BOOL shouldUseBezierRepresentationForRendering;
- (id)createLayoutManager;
- (id)createTextContainer;
- (struct CGPoint)drawingPointForText;
- (struct CGSize)textContainerSize;
- (double)totalHeightOfFont:(id)arg1;
- (struct CGRect)calculateInfluenceRectForBounds;
- (void)performInitWithCoder:(id)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;
- (id)possibleOverridesInDocument:(id)arg1 actualOverrides:(id)arg2 skipping:(id)arg3;
- (void)updateColorCounter:(id)arg1;
- (void)migratePropertiesFromV80OrEarlierWithCoder:(id)arg1;
- (void)migratePropertiesFromV77OrEarlierWithCoder:(id)arg1;
- (void)migratePropertiesFromV76OrEarlierWithCoder:(id)arg1;
- (void)migratePropertiesFromV44OrEarlierWithCoder:(id)arg1;
- (void)trackColors:(id)arg1;
- (BOOL)shouldSkipDrawingInContext:(id)arg1;
- (BOOL)shouldRenderInTransparencyLayer;
- (id)textStoragePoolInCache:(id)arg1;
- (void)addDefaultFillAttributes:(id)arg1 exporter:(id)arg2;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3;
- (void)addPathDefinitionToDocument:(id)arg1;
- (void)addContentToTextElement:(id)arg1 exporter:(id)arg2 textStorage:(id)arg3;
- (struct CGPoint)originForCharacterAttributes:(id)arg1 exporter:(id)arg2 layoutManager:(id)arg3;
- (id)elementForSpan:(id)arg1 origin:(struct CGPoint)arg2 exporter:(id)arg3 text:(id)arg4;
- (id)spanInfoForRun:(struct _NSRange)arg1 charAttributes:(id)arg2 text:(id)arg3 layoutManager:(id)arg4;
- (void)addSVGAttributes:(id)arg1 forCharacterAttributes:(id)arg2 exporter:(id)arg3;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (id)svgStyle:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) MSAttributedString *attributedString;
@property(readonly, nonatomic) BOOL automaticallyDrawOnUnderlyingPath;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL dontSynchroniseWithSymbol;
@property(readonly, nonatomic) id <MSExportOptions> exportOptionsGeneric;
@property(readonly, nonatomic) id <MSRect> frameGeneric;
@property(readonly, nonatomic) struct CGRect glyphBounds;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL heightIsClipped;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isSelected;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) long long layerListExpandedType;
@property(readonly, nonatomic) long long lineSpacingBehaviour;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL nameIsFixed;
@property(readonly, copy, nonatomic) NSObject<NSCopying,NSCoding> *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) NSString *originalObjectID;
@property(readonly, nonatomic) MSImageData *preview;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) unsigned long long resizingType;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) BOOL shouldBreakMaskChain;
@property(readonly, nonatomic) id <MSStyle> styleGeneric;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long textBehaviour;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;

@end

