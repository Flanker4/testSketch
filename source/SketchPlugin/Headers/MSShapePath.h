//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSShapePath.h"

#import "MSShapePath.h"

@class NSArray, NSObject<NSCopying,NSCoding>, NSString;

@interface MSShapePath : _MSShapePath <MSShapePath>
{
}

+ (id)pathWithBezierPath:(id)arg1 inRect:(struct CGRect)arg2;
+ (id)pathWithPoints:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isPolygon;
- (BOOL)isRectangle;
- (BOOL)isLine;
- (void)multiplyBy:(double)arg1;
- (id)bezierPathInRect:(struct CGRect)arg1;
- (id)pathInRect:(struct CGRect)arg1;
- (BOOL)attemptToSimplifyBetweenPoint:(id)arg1 andPoint:(id)arg2;
- (BOOL)simplifyPathOnce;
- (void)simplifyPath;
@property(readonly, nonatomic) unsigned long long numberOfPoints;
- (id)lastPoint;
- (id)firstPoint;
- (id)pointsAroundIndex:(unsigned long long)arg1;
- (id)pointAtIndex:(long long)arg1;
- (void)removeAllPoints;
- (void)removeLastPoint;
- (id)layer;
- (id)initWithBezierPath:(id)arg1 inRect:(struct CGRect)arg2;
- (id)initWithPoints:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isClosed;
@property(readonly, copy, nonatomic) NSObject<NSCopying,NSCoding> *objectID;
@property(readonly, nonatomic) NSArray *points;
@property(readonly) Class superclass;

@end

