//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SVGGroupElement.h"

@class NSSet;

@interface _SVGMask : SVGGroupElement
{
    NSSet *_masking;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSSet *masking; // @synthesize masking=_masking;

- (void)primitiveRemoveMaskingObject:(id)arg1;
- (void)primitiveAddMaskingObject:(id)arg1;
- (void)removeMaskingObject:(id)arg1;
- (void)addMaskingObject:(id)arg1;

@end

