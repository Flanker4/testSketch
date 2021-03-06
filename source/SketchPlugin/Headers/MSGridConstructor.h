//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class NSArray;

@interface MSGridConstructor : NSObject
{
    NSArray *_layers;
    CDStruct_ec0e0888 _options;
}

@property(nonatomic) CDStruct_ec0e0888 options; // @synthesize options=_options;
@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;

- (id)duplicateLayers:(id)arg1;
- (id)makeAllLayers;
- (double)largestHeightInLayers:(id)arg1;
- (struct CGSize)sizeForLayer:(id)arg1;
- (void)makeGridWithLayers:(id)arg1 options:(CDStruct_ec0e0888)arg2;

@end

