//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableCustomShapeLayer.h"

@interface _MSImmutableRectangleShape : MSImmutableCustomShapeLayer
{
    double _fixedRadius;
    BOOL _hasConvertedToNewRoundCorners;
}

+ (Class)mutableClass;
@property(nonatomic) BOOL hasConvertedToNewRoundCorners; // @synthesize hasConvertedToNewRoundCorners=_hasConvertedToNewRoundCorners;
@property(nonatomic) double fixedRadius; // @synthesize fixedRadius=_fixedRadius;
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

