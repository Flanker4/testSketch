//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableStyledLayer.h"

@class MSImageData;

@interface _MSImmutableBitmapLayer : MSImmutableStyledLayer
{
    struct CGRect _clippingMask;
    BOOL _fillReplacesImage;
    MSImageData *_image;
    struct CGRect _nineSliceCenterRect;
    struct CGSize _nineSliceScale;
}

+ (Class)mutableClass;
@property(nonatomic) struct CGSize nineSliceScale; // @synthesize nineSliceScale=_nineSliceScale;
@property(nonatomic) struct CGRect nineSliceCenterRect; // @synthesize nineSliceCenterRect=_nineSliceCenterRect;
@property(retain, nonatomic) MSImageData *image; // @synthesize image=_image;
@property(nonatomic) BOOL fillReplacesImage; // @synthesize fillReplacesImage=_fillReplacesImage;
@property(nonatomic) struct CGRect clippingMask; // @synthesize clippingMask=_clippingMask;

- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(id)arg1;
- (void)enumerateProperties:(id)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

