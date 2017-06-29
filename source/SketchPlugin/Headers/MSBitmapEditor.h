//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class MSBitmapEditEventHandler, MSBitmapLayer, NSBezierPath;

@interface MSBitmapEditor : NSObject
{
    MSBitmapEditEventHandler *_eventHandler;
}

@property(nonatomic) __weak MSBitmapEditEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;

- (struct CGRect)imageBounds;
- (struct CGSize)imageSize;
- (double)zoomValue;
- (void)drawMarchingAntsForPath:(id)arg1;
- (struct CGPoint)pointInBitmapLayer:(struct CGPoint)arg1;
- (void)refreshRectInBitmapCoordinates:(struct CGRect)arg1;
@property(retain, nonatomic) NSBezierPath *accumulatedSelection; // @dynamic accumulatedSelection;
@property(readonly, nonatomic) MSBitmapLayer *bitmapLayer; // @dynamic bitmapLayer;
- (void)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)mouseDragged:(struct CGPoint)arg1;
- (void)mouseDown:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)draw;

@end

