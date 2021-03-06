//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class NSMutableDictionary;

@interface MSSnapperData : NSObject
{
    NSMutableDictionary *_sizeItems;
    NSMutableDictionary *_distanceItems;
    NSMutableDictionary *_lines;
}

@property(retain, nonatomic) NSMutableDictionary *lines; // @synthesize lines=_lines;
@property(retain, nonatomic) NSMutableDictionary *distanceItems; // @synthesize distanceItems=_distanceItems;
@property(retain, nonatomic) NSMutableDictionary *sizeItems; // @synthesize sizeItems=_sizeItems;

- (void)enumerateInstructions:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)linesForAxis:(unsigned long long)arg1;
- (void)removeAllDistanceInstructionsForAxis:(unsigned long long)arg1;
- (void)addDistanceInstruction:(id)arg1;
- (id)firstDistanceForAxis:(unsigned long long)arg1;
- (BOOL)hasDistanceInstructionsForAxis:(unsigned long long)arg1;
- (void)removeAllSizeInstructionsForAxis:(unsigned long long)arg1;
- (void)addSizeInstruction:(id)arg1;
- (id)firstSizeForAxis:(unsigned long long)arg1;
- (BOOL)hasSizeInstructionsForAxis:(unsigned long long)arg1;
- (id)axisDictionary;
- (id)init;

@end

