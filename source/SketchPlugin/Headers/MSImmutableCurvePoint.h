//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableCurvePoint.h"

#import "MSCurvePoint.h"

@class NSObject<NSCopying,NSCoding>, NSString;

@interface MSImmutableCurvePoint : _MSImmutableCurvePoint <MSCurvePoint>
{
}

@property(readonly, nonatomic) BOOL isRounded;

// Remaining properties
@property(readonly, nonatomic) double cornerRadius;
@property(readonly, nonatomic) struct CGPoint curveFrom;
@property(readonly, nonatomic) long long curveMode;
@property(readonly, nonatomic) struct CGPoint curveTo;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasCurveFrom;
@property(readonly, nonatomic) BOOL hasCurveTo;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSObject<NSCopying,NSCoding> *objectID;
@property(readonly, nonatomic) struct CGPoint point;
@property(readonly) Class superclass;

@end

