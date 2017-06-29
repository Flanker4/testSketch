//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class NSArray, NSError, NSString, NSURL;

@protocol MSHighLevelExportDelegate <NSObject>
- (void)closeInfoGroup;
- (void)openInfoGroupWithKey:(NSString *)arg1;
- (void)outputInfo:(id)arg1 withKey:(NSString *)arg2;
- (void)outputFormat:(NSString *)arg1;
- (void)outputError:(NSError *)arg1 format:(NSString *)arg2;
- (NSURL *)urlOptionForKey:(NSString *)arg1 defaultingToWorkingDirectory:(BOOL)arg2;
- (double)doubleOptionForKey:(NSString *)arg1;
- (NSArray *)arrayOptionForKey:(NSString *)arg1 separator:(NSString *)arg2;
- (BOOL)boolOptionForKey:(NSString *)arg1;
- (id)optionForKey:(NSString *)arg1;
@end

