//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "MSRenderingContextCacheProvider.h"

@class BCCache, MSImmutableLayerAncestry, NSString;

@interface MSSymbolPreviewGeneratorOperation : NSOperation <MSRenderingContextCacheProvider>
{
    MSImmutableLayerAncestry *_artboardAncestry;
    id _imageBlock;
    BCCache *_renderingCache;
    struct CGSize _size;
}

@property(retain, nonatomic) BCCache *renderingCache; // @synthesize renderingCache=_renderingCache;
@property(copy, nonatomic) id imageBlock; // @synthesize imageBlock=_imageBlock;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) MSImmutableLayerAncestry *artboardAncestry; // @synthesize artboardAncestry=_artboardAncestry;

@property(readonly, nonatomic) BCCache *zoomIndependentCache;
- (id)cacheForZoomLevel:(double)arg1;
- (void)main;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
