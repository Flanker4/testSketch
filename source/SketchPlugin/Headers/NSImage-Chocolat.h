//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImage.h"

@interface NSImage (Chocolat)
+ (id)PDFImageWithSize:(struct CGSize)arg1 flipped:(BOOL)arg2 drawingHandler:(id)arg3;
- (id)imageWithPadding:(unsigned long long)arg1;
- (BOOL)isVectorImage;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 fraction:(double)arg3 respectFlipped:(BOOL)arg4 colorSpace:(id)arg5;
- (id)bitSafeBitmapImageRep;
- (id)firstBitmapImageRep;
- (id)firstBitmapImageRepOrCreateIfNecessary;
- (void)drawFlippedAtPoint:(struct CGPoint)arg1;
- (id)altImage;
- (id)pressedImage;
- (id)hoverImage;
- (id)selectedImage;
- (void)drawProportionallyInRect:(struct CGRect)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3;
- (id)scaledImageToSize:(struct CGSize)arg1;
- (void)drawInRect:(struct CGRect)arg1 fraction:(double)arg2;
- (void)drawAtPoint:(struct CGPoint)arg1 fraction:(double)arg2;
- (void)drawAtPoint:(struct CGPoint)arg1;
@end

