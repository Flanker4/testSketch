//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class NSBezierPath;

@interface MSBezierInterpreter : NSObject
{
    NSBezierPath *_bezierPath;
    struct CGRect _rect;
}

+ (id)pointsFromBezierPath:(id)arg1 inRect:(struct CGRect)arg2;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) NSBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;

- (id)points;

@end

