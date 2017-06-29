//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSSnapDrawInstruction.h"

@class MSSnapItem;

@interface MSSnapDrawSizeInstruction : MSSnapDrawInstruction
{
    MSSnapItem *_item;
    unsigned long long _axis;
}

+ (id)sizeInstructionForLayer:(id)arg1 axis:(unsigned long long)arg2;
+ (id)sizeInstructionForItem:(id)arg1 axis:(unsigned long long)arg2;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property(retain, nonatomic) MSSnapItem *item; // @synthesize item=_item;

- (BOOL)isEqual:(id)arg1;
- (struct CGRect)rect;
- (void)drawWithZoom:(double)arg1 context:(id)arg2;

@end
