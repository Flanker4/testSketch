//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSModelObject.h"
#import "MSTextStyle-Protocol.h"
#import "MSGraphicsContextSettings-Protocol.h"
#import "MSStyleColorControls-Protocol.h"
#import "MSStyleBorderOptions-Protocol.h"
#import "MSStyleReflection-Protocol.h"
#import "MSStyleBlur-Protocol.h"

@class NSArray, NSString;

@protocol _MSStyle <MSModelObject>
@property(readonly, nonatomic) id <MSTextStyle> textStyleGeneric;
@property(readonly, nonatomic) NSArray *shadows;
@property(readonly, nonatomic) id <MSStyleReflection> reflectionGeneric;
@property(readonly, nonatomic) NSArray *innerShadows;
@property(readonly, nonatomic) NSArray *fills;
@property(readonly, nonatomic) id <MSGraphicsContextSettings> contextSettingsGeneric;
@property(readonly, nonatomic) id <MSStyleColorControls> colorControlsGeneric;
@property(readonly, nonatomic) NSArray *borders;
@property(readonly, nonatomic) id <MSStyleBorderOptions> borderOptionsGeneric;
@property(readonly, nonatomic) id <MSStyleBlur> blurGeneric;
@property(readonly, nonatomic) unsigned long long startDecorationType;
@property(readonly, nonatomic) NSString *sharedObjectID;
@property(readonly, nonatomic) long long miterLimit;
@property(readonly, nonatomic) unsigned long long endDecorationType;
@end

