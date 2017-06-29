//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@class BCAlphaColorPicker, BCColorPreview, BCHueColorPicker, BCMagnifierButton, BCSaturationBrightnessColorPicker, MSColor, NSTextField;

@interface BCHSBColorPicker : NSControl
{
    BCSaturationBrightnessColorPicker *sbPickerView;
    BCHueColorPicker *hPickerView;
    BCAlphaColorPicker *aPickerView;
    BCColorPreview *colorPreviewView;
    BCMagnifierButton *magnifierButton;
    long long ignoreColorActionsCounter;
    NSTextField *_hexValueTextField;
    NSTextField *_redComponentTextField;
    NSTextField *_greenComponentTextField;
    NSTextField *_blueComponentTextField;
    NSTextField *_hueComponentTextField;
    NSTextField *_satComponentTextField;
    NSTextField *_ligComponentTextField;
    NSTextField *_alphaComponentTextField;
    id _bc_target;
    SEL _bc_action;
}

@property SEL bc_action; // @synthesize bc_action=_bc_action;
@property(nonatomic) __weak id bc_target; // @synthesize bc_target=_bc_target;
@property(retain, nonatomic) NSTextField *alphaComponentTextField; // @synthesize alphaComponentTextField=_alphaComponentTextField;
@property(retain, nonatomic) NSTextField *ligComponentTextField; // @synthesize ligComponentTextField=_ligComponentTextField;
@property(retain, nonatomic) NSTextField *satComponentTextField; // @synthesize satComponentTextField=_satComponentTextField;
@property(retain, nonatomic) NSTextField *hueComponentTextField; // @synthesize hueComponentTextField=_hueComponentTextField;
@property(retain, nonatomic) NSTextField *blueComponentTextField; // @synthesize blueComponentTextField=_blueComponentTextField;
@property(retain, nonatomic) NSTextField *greenComponentTextField; // @synthesize greenComponentTextField=_greenComponentTextField;
@property(retain, nonatomic) NSTextField *redComponentTextField; // @synthesize redComponentTextField=_redComponentTextField;
@property(retain, nonatomic) NSTextField *hexValueTextField; // @synthesize hexValueTextField=_hexValueTextField;

- (void)dealloc;
- (void)setFrequentColors:(id)arg1;
- (void)frequentColorPicked:(id)arg1;
- (void)hexValueFieldChanged:(id)arg1;
- (void)rgbComponentFieldsChanged:(id)arg1;
- (void)hslComponentFieldsChanged:(id)arg1;
- (long long)lightDisplayValueForColor:(id)arg1;
- (long long)satDisplayValueForColor:(id)arg1;
- (long long)hueDisplayValueForColor:(id)arg1;
- (void)setColor:(id)arg1 ignoringFields:(id)arg2;
@property(copy, nonatomic) MSColor *color; // @dynamic color;
- (id)flexibleColor;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateColorPreviewView;
- (void)saturationBrightnessChanged:(id)arg1;
- (void)alphaChanged:(id)arg1;
- (void)hueChanged:(id)arg1;
- (void)magnifierAction:(id)arg1;
- (void)systemColorPanelDidChangeColor:(id)arg1;
- (void)awakeFromNib;
- (void)constructSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (SEL)action;
- (id)target;

@end

