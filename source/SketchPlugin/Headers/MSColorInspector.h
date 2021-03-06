//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "BCPopoverDelegate.h"
#import "MSColorInspectorSectionDelegate.h"
#import "MSModeModePickerDelegate.h"
#import "NSTouchBarDelegate.h"

@class BCHSBColorPicker, MSColorInspectorSectionColor, MSColorInspectorSectionGradient, MSColorInspectorSectionNoise, MSColorInspectorSectionPattern, MSDocument, MSEventHandlerManager, MSModePickerView, MSPersistentAssetCollection, MSStackView, NSArray, NSString, NSView;

@interface MSColorInspector : NSViewController <MSColorInspectorSectionDelegate, MSModeModePickerDelegate, BCPopoverDelegate, NSTouchBarDelegate>
{
    NSArray *_styleParts;
    id <MSColorInspectorDelegate> _delegate;
    MSModePickerView *_borderColorTypePicker;
    MSModePickerView *_fillColorTypePicker;
    BCHSBColorPicker *_colorPicker;
    NSView *_emptyTopView;
    NSView *_colorPickerView;
    NSView *_shadowBlendingView;
    NSView *_borderBlendingOpacityView;
    MSColorInspectorSectionColor *_colorSection;
    MSColorInspectorSectionGradient *_gradientSection;
    MSColorInspectorSectionPattern *_patternSection;
    MSColorInspectorSectionNoise *_noiseSection;
    MSEventHandlerManager *_eventHandler;
    MSDocument *_document;
    MSPersistentAssetCollection *_globalAssets;
    MSStackView *_stackView;
}

@property(retain, nonatomic) MSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) MSPersistentAssetCollection *globalAssets; // @synthesize globalAssets=_globalAssets;
@property(retain, nonatomic) MSDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) MSEventHandlerManager *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) MSColorInspectorSectionNoise *noiseSection; // @synthesize noiseSection=_noiseSection;
@property(retain, nonatomic) MSColorInspectorSectionPattern *patternSection; // @synthesize patternSection=_patternSection;
@property(retain, nonatomic) MSColorInspectorSectionGradient *gradientSection; // @synthesize gradientSection=_gradientSection;
@property(retain, nonatomic) MSColorInspectorSectionColor *colorSection; // @synthesize colorSection=_colorSection;
@property(retain, nonatomic) NSView *borderBlendingOpacityView; // @synthesize borderBlendingOpacityView=_borderBlendingOpacityView;
@property(retain, nonatomic) NSView *shadowBlendingView; // @synthesize shadowBlendingView=_shadowBlendingView;
@property(retain, nonatomic) NSView *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
@property(retain, nonatomic) NSView *emptyTopView; // @synthesize emptyTopView=_emptyTopView;
@property(retain, nonatomic) BCHSBColorPicker *colorPicker; // @synthesize colorPicker=_colorPicker;
@property(retain, nonatomic) MSModePickerView *fillColorTypePicker; // @synthesize fillColorTypePicker=_fillColorTypePicker;
@property(retain, nonatomic) MSModePickerView *borderColorTypePicker; // @synthesize borderColorTypePicker=_borderColorTypePicker;
@property(nonatomic) __weak id <MSColorInspectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *styleParts; // @synthesize styleParts=_styleParts;

- (void)touchBarColorAction:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)popoverWindowDidMove:(id)arg1;
- (void)popoverWindowSizeDidChange:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)dealloc;
- (void)colorMagnifierAction:(id)arg1;
- (void)setColorTabIndex:(unsigned long long)arg1;
- (unsigned long long)colorTabIndex;
- (void)switchToColorTabAtIndex:(unsigned long long)arg1;
- (void)reloadTouchBarsAfterSelectionChange:(id)arg1;
- (void)reloadTouchBars;
- (void)pickerViewChanged:(id)arg1;
- (id)pickerView:(id)arg1 labelForMode:(long long)arg2;
- (id)filteredStyleParts:(id)arg1;
- (void)close;
- (void)refreshAction:(id)arg1;
- (void)colorChangedTo:(id)arg1;
- (void)colorPickerAction:(id)arg1;
- (void)setColor:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)setMaximumAvailableHeight:(long long)arg1;
- (void)validateEnableButtons;
- (id)currentSection;
- (long long)initialColorTypePickerMode;
- (id)viewsByAddingSeparatorsToViews:(id)arg1;
- (void)stack;
- (BOOL)stylePartIsGradient:(id)arg1;
- (void)findFrequentColors;
- (void)prepareForDisplay;
- (void)setInitialColor:(id)arg1;
- (id)currentModePicker;
- (void)inspectorSectionDidUpdate:(id)arg1;
- (id)documentAssets;
- (void)didRemoveAssetOfType:(unsigned long long)arg1;
- (void)didAddAsset:(id)arg1;
- (void)colorDidChangeTo:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)applyBackgroundArrowColor;
- (void)viewDidLoad;
- (id)initWithSender:(id)arg1 document:(id)arg2 handlerManager:(id)arg3 globalAssets:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

