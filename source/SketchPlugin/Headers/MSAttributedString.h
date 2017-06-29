//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

#import "NSCoding.h"
#import "NSCopying.h"

@class NSAttributedString, NSSet, NSString;

@interface MSAttributedString : NSObject <NSCoding, NSCopying>
{
    NSAttributedString *_attributedString;
    NSAttributedString *_encodedAttributedString;
    NSAttributedString *_transformedAttributedString;
}

+ (BOOL)isRequiredFontAvailableInDictionary:(id)arg1;
+ (id)decodeAttributedString:(id)arg1;
+ (id)encodeAttributedString:(id)arg1;
+ (id)decodeAttributesInDictionary:(id)arg1;
+ (id)encodeAttributesInDictionary:(id)arg1;
@property(retain, nonatomic) NSAttributedString *transformedAttributedString; // @synthesize transformedAttributedString=_transformedAttributedString;
@property(retain, nonatomic) NSAttributedString *encodedAttributedString; // @synthesize encodedAttributedString=_encodedAttributedString;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;

- (BOOL)propertiesAreEqual:(id)arg1;
- (id)debugDescription;
- (id)immutableModelObject;
@property(readonly, nonatomic) BOOL areRequiredFontsAvailable;
@property(readonly, nonatomic) NSSet *unavailableFontNames;
@property(readonly, nonatomic) NSSet *fontNames;
@property(readonly, nonatomic) NSString *string;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttributedString:(id)arg1;
- (id)treeAsDictionary;

@end

