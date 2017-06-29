//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSNormalBaseEventHandler.h"

@class MSLayer, MSNormalEventData, MSSnapper, NSDictionary;

@interface MSNormalResizeEventHandler : MSNormalBaseEventHandler
{
    struct CGPoint midPoint;
    struct CGPoint oppositePoint;
    struct CGPoint oppositeRotatedPoint;
    double originalProportions;
    BOOL _layerRectWasIntegral;
    long long _resizingCorner;
    MSLayer *_resizingLayer;
    MSSnapper *_layerSnapper;
    MSNormalEventData *_eventData;
    NSDictionary *_layerFramesBeforeResize;
}

@property(retain, nonatomic) NSDictionary *layerFramesBeforeResize; // @synthesize layerFramesBeforeResize=_layerFramesBeforeResize;
@property(nonatomic) BOOL layerRectWasIntegral; // @synthesize layerRectWasIntegral=_layerRectWasIntegral;
@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
@property(retain, nonatomic) MSSnapper *layerSnapper; // @synthesize layerSnapper=_layerSnapper;
@property(retain, nonatomic) MSLayer *resizingLayer; // @synthesize resizingLayer=_resizingLayer;
@property(nonatomic) long long resizingCorner; // @synthesize resizingCorner=_resizingCorner;

- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (long long)oppositeCorner;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)flipResizingLayerIfNecessary:(struct CGPoint)arg1;
- (unsigned long long)validSnapEdgesForResizingCorner;
- (struct CGRect)placeRectInOppositeCorner:(struct CGRect)arg1;
- (BOOL)shouldConstrainProportionsForFlags:(unsigned long long)arg1;
- (struct CGRect)makeRect:(struct CGRect)arg1 conformToProportions:(BOOL)arg2;
- (struct CGPoint)mouseAfterAccountingForRotation:(struct CGPoint)arg1;
- (void)makeLayerIntegral:(id)arg1;
- (struct CGRect)snapRect:(struct CGRect)arg1 constrainProportions:(BOOL)arg2;
- (struct CGRect)centerRect:(struct CGRect)arg1;
- (struct CGRect)newRectForResizeWithMouse:(struct CGPoint)arg1 fromCenter:(BOOL)arg2 maySnap:(BOOL)arg3 constrainProportions:(BOOL)arg4;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDraggedEvent:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 cache:(id)arg2;
- (void)calculateOppositeRotatedPoint;
- (void)calculateOppositePoint;
- (void)calculateMidPoint;
- (void)displayResizeCursor;
- (void)prepareForResize;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (id)currentGroup;

@end

