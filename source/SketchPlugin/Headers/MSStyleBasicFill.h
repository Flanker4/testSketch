//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSStyleBasicFill-Protocol.h"

#import "MSStyleBasicFill-Protocol.h"
@protocol MSColor, MSGradient;
@class NSObject, NSString;

@interface MSStyleBasicFill : _MSStyleBasicFill <MSStyleBasicFill>
{
}

+ (id)defaultFillColor;
+ (void)drawNoiseFill:(id)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
+ (void)drawPatternFill:(id)arg1 inRect:(struct CGRect)arg2;
+ (void)drawGradientFill:(id)arg1 inRect:(struct CGRect)arg2;
+ (void)drawColorFill:(id)arg1 inRect:(struct CGRect)arg2;
+ (void)drawBasicFill:(id)arg1 color:(id)arg2 enabled:(BOOL)arg3 inRect:(struct CGRect)arg4;
+ (void)drawCheckerboardBackgroundInRect:(struct CGRect)arg1;
- (void)performInitEmptyObject;
- (id)previewImageOfSize:(struct CGSize)arg1 clippingAsBorder:(BOOL)arg2 borderWidth:(double)arg3;

// Remaining properties
@property(readonly, nonatomic) id <MSColor> colorGeneric; // @dynamic colorGeneric;
@property(readonly, nonatomic) id <MSGraphicsContextSettings> contextSettingsGeneric; // @dynamic contextSettingsGeneric;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long fillType;
@property(readonly, nonatomic) id <MSGradient> gradientGeneric; // @dynamic gradientGeneric;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isEnabled;
@property(readonly, copy, nonatomic) NSObject<NSCopying,NSCoding> *objectID;
@property(readonly) Class superclass;

@end

