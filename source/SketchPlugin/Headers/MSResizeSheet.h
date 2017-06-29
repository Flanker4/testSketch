//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CHSheetController.h"

@class NSDictionary, NSTextField, NSTimer, NSView;

@interface MSResizeSheet : CHSheetController
{
    BOOL _hasDoneFirstScale;
    double _scale;
    NSDictionary *_selectedObjectsBackup;
    NSTimer *_refreshTimer;
    NSTextField *_scalingField;
    NSTextField *_widthField;
    NSTextField *_heightField;
    NSTextField *_labelField;
    long long _scalingOriginCorner;
    NSView *_originButtonsContainer;
    NSTextField *_originLabel;
    struct CGRect _originalRect;
}

@property(retain, nonatomic) NSTextField *originLabel; // @synthesize originLabel=_originLabel;
@property(retain, nonatomic) NSView *originButtonsContainer; // @synthesize originButtonsContainer=_originButtonsContainer;
@property(nonatomic) long long scalingOriginCorner; // @synthesize scalingOriginCorner=_scalingOriginCorner;
@property(retain, nonatomic) NSTextField *labelField; // @synthesize labelField=_labelField;
@property(retain, nonatomic) NSTextField *heightField; // @synthesize heightField=_heightField;
@property(retain, nonatomic) NSTextField *widthField; // @synthesize widthField=_widthField;
@property(retain, nonatomic) NSTextField *scalingField; // @synthesize scalingField=_scalingField;
@property(nonatomic) BOOL hasDoneFirstScale; // @synthesize hasDoneFirstScale=_hasDoneFirstScale;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(readonly, nonatomic) struct CGRect originalRect; // @synthesize originalRect=_originalRect;
@property(readonly, nonatomic) NSDictionary *selectedObjectsBackup; // @synthesize selectedObjectsBackup=_selectedObjectsBackup;
@property(nonatomic) double scale; // @synthesize scale=_scale;

- (id)doc;
- (void)restoreCurrentPage;
- (void)saveBackupOfSelection;
- (void)scaleSelectedObjects;
- (void)cancel:(id)arg1;
- (void)confirm:(id)arg1;
- (void)doScaling;
- (void)scheduleRefreshTimerIfNeeded;
- (void)selectScalingOrigin:(id)arg1;
- (void)refreshScalingOriginButton:(id)arg1;
- (void)refreshScalingOriginControls;
- (void)didChangeValues;
- (void)willChangeValues;
@property(nonatomic) double height; // @dynamic height;
- (void)setNilValueForKey:(id)arg1;
@property(nonatomic) double width; // @dynamic width;
- (void)windowDidLoad;
- (id)initWithWindow:(id)arg1;

@end

