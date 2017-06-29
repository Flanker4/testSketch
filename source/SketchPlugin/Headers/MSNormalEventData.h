//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class MSLayer, MSSnapperData;

@interface MSNormalEventData : NSObject
{
    BOOL _hasMultipleTouches;
    BOOL _didMouseDown;
    MSLayer *_resizingLayer;
    long long _resizingHandle;
    long long _dragMode;
    MSSnapperData *_snapperData;
    struct CGPoint _mouseDown;
    struct CGPoint _midPoint;
    struct CGPoint _originalScrollOrigin;
}

@property(retain, nonatomic) MSSnapperData *snapperData; // @synthesize snapperData=_snapperData;
@property(nonatomic) long long dragMode; // @synthesize dragMode=_dragMode;
@property(nonatomic) long long resizingHandle; // @synthesize resizingHandle=_resizingHandle;
@property(retain, nonatomic) MSLayer *resizingLayer; // @synthesize resizingLayer=_resizingLayer;
@property(nonatomic) struct CGPoint originalScrollOrigin; // @synthesize originalScrollOrigin=_originalScrollOrigin;
@property(nonatomic) struct CGPoint midPoint; // @synthesize midPoint=_midPoint;
@property(nonatomic) struct CGPoint mouseDown; // @synthesize mouseDown=_mouseDown;
@property(nonatomic) BOOL didMouseDown; // @synthesize didMouseDown=_didMouseDown;
@property(nonatomic) BOOL hasMultipleTouches; // @synthesize hasMultipleTouches=_hasMultipleTouches;

- (void)setSnapperData:(id)arg1 delegate:(id)arg2;

@end
