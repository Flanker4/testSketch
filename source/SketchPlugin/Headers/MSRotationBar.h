//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@class CALayer;

@interface MSRotationBar : NSControl
{
    double _rotation;
    double _startingRotation;
    double _startingX;
    CALayer *_dialLayer;
}

@property(retain, nonatomic) CALayer *dialLayer; // @synthesize dialLayer=_dialLayer;
@property(nonatomic) double startingX; // @synthesize startingX=_startingX;
@property(nonatomic) double startingRotation; // @synthesize startingRotation=_startingRotation;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;

- (void)drawInContext:(struct CGContext *)arg1 size:(double)arg2;
- (void)drawMarkerInContext:(struct CGContext *)arg1 size:(double)arg2 origin:(struct CGPoint)arg3;
- (void)updateLayer;
- (void)rotateLayerToDegrees:(double)arg1;
- (BOOL)wantsUpdateLayer;
- (BOOL)acceptsTouchEvents;
- (void)panGestureAction:(id)arg1;
- (unsigned long long)allowedTouchTypes;
- (id)initWithFrame:(struct CGRect)arg1;

@end
