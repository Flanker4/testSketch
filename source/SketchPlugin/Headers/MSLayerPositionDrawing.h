//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class MSLayer, NSArray, NSNumberFormatter;

@interface MSLayerPositionDrawing : NSObject
{
    BOOL _enabled;
    id <MSBasicDelegate> _delegate;
    MSLayer *_targetLayer;
    double _zoomValue;
    NSNumberFormatter *_numberFormatter;
    NSArray *_hoverGuides;
}

@property(retain, nonatomic) NSArray *hoverGuides; // @synthesize hoverGuides=_hoverGuides;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) __weak MSLayer *targetLayer; // @synthesize targetLayer=_targetLayer;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;

- (BOOL)isMeasuringDistance;
- (void)findHoverGuides:(struct CGPoint)arg1;
- (void)clear;
- (void)drawDistanceToEnclosingFrame:(struct CGRect)arg1 zoom:(double)arg2;
- (struct CGRect)verticalRectBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;
- (struct CGRect)horizontalRectBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;
- (double)dashesOffset;
- (void)applyDashPattern:(id)arg1;
- (void)drawHorizontalDashLinesBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;
- (void)drawVerticalDashLinesBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;
- (void)drawHeightBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;
- (void)drawWidthBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;
- (void)drawOutlineForRect:(struct CGRect)arg1;
- (void)drawDistanceFromSelectionToHover;
- (void)drawDistanceToGuidesWithZoom;
- (struct CGRect)selectedLayersRect;
- (struct CGRect)enclosingGroupRectOrArtboard;
- (void)draw;

@end

