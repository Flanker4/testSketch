//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@interface MSSnapHelperMethods : NSObject
{
}

+ (void)_drawBarsForHeightOfRect:(struct CGRect)arg1 zoom:(double)arg2;
+ (void)_drawBarsForWidthOfRect:(struct CGRect)arg1 zoom:(double)arg2;
+ (void)applyTransform:(struct CGAffineTransform)arg1 inRect:(struct CGRect)arg2;
+ (void)_drawLabelWithAmount:(double)arg1 forHeightOfRect:(struct CGRect)arg2 zoom:(double)arg3 transform:(struct CGAffineTransform)arg4 formatter:(id)arg5;
+ (void)_drawLabelWithAmount:(double)arg1 forWidthOfRect:(struct CGRect)arg2 zoom:(double)arg3 transform:(struct CGAffineTransform)arg4 formatter:(id)arg5;
+ (void)drawHeightOfRectInRect:(struct CGRect)arg1 amount:(double)arg2 zoom:(double)arg3 transform:(struct CGAffineTransform)arg4 formatter:(id)arg5;
+ (void)drawWidthOfRectInRect:(struct CGRect)arg1 amount:(double)arg2 zoom:(double)arg3 transform:(struct CGAffineTransform)arg4 formatter:(id)arg5;
+ (void)drawHeightOfFrameBesidesFrame:(struct CGRect)arg1 zoom:(double)arg2 transform:(struct CGAffineTransform)arg3 formatter:(id)arg4;
+ (void)drawWidthOfFrameAboveFrame:(struct CGRect)arg1 zoom:(double)arg2 transform:(struct CGAffineTransform)arg3 formatter:(id)arg4;
+ (void)drawWidthOfRectInRect:(struct CGRect)arg1 amount:(double)arg2 zoom:(double)arg3 formatter:(id)arg4;
+ (void)drawHeightOfRectInRect:(struct CGRect)arg1 amount:(double)arg2 zoom:(double)arg3 formatter:(id)arg4;
+ (void)drawHeightOfFrameBesidesFrame:(struct CGRect)arg1 zoom:(double)arg2 formatter:(id)arg3;
+ (void)drawWidthOfFrameAboveFrame:(struct CGRect)arg1 zoom:(double)arg2 formatter:(id)arg3;
+ (void)resetSnapColor;
+ (id)snapColor;

@end

