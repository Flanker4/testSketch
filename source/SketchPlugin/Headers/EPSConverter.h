//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@interface EPSConverter : NSObject
{
    id _progressBlock;
}

@property(copy, nonatomic) id progressBlock; // @synthesize progressBlock=_progressBlock;

- (void)converterReleased;
- (void)converterMessage:(id)arg1;
- (void)converterProgress;
- (void)endPageNumber:(unsigned long long)arg1 info:(id)arg2;
- (void)beginPageNumber:(unsigned long long)arg1 info:(id)arg2;
- (void)endDocumentSucceeded:(_Bool)arg1;
- (void)beginDocument;
- (BOOL)convertEPSWithProvider:(struct CGDataProvider *)arg1 consumer:(struct CGDataConsumer *)arg2;
- (id)convertEPSAtURL:(id)arg1 progressBlock:(id)arg2;
- (id)convertEPSData:(id)arg1 progressBlock:(id)arg2;
- (void)convertEPSAtURL:(id)arg1 toURL:(id)arg2 progressBlock:(id)arg3;
- (id)init;

@end

