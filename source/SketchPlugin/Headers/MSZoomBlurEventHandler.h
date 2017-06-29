//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPointsEventHandler.h"

@class MSStyleBlur;

@interface MSZoomBlurEventHandler : MSPointsEventHandler
{
    MSStyleBlur *_blurStyle;
}

@property(retain, nonatomic) MSStyleBlur *blurStyle; // @synthesize blurStyle=_blurStyle;

- (struct CGPoint)convertPointToAbsoluteCoordinates:(struct CGPoint)arg1;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (id)currentGroup;
- (id)points;

@end

