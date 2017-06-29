//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSStylePart.h"

#import "MSStylePart-Protocol.h"


@class NSObject, NSString;

@interface MSStylePart : _MSStylePart <NSCopying, MSStylePart>
{
}

+ (id)defaultStylePartForStyle:(id)arg1;
- (id)parentLayer;
- (id)parentStyle;
- (void)multiplyBy:(double)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)topViewForColorInspector:(id)arg1;
- (id)blendingViewForColorInspector:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isEnabled;
@property(readonly, copy, nonatomic) NSObject<NSCopying,NSCoding> *objectID;
@property(readonly) Class superclass;

@end

