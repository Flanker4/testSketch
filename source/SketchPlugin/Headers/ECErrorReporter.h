//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@interface ECErrorReporter : NSObject
{
}

+ (void)reportError:(id)arg1 message:(id)arg2;
+ (void)reportStatus:(int)arg1 message:(id)arg2;
+ (void)reportResult:(BOOL)arg1 message:(id)arg2;
+ (void)reportResult:(BOOL)arg1 error:(id)arg2 message:(id)arg3;
+ (BOOL)checkStatus:(int)arg1;
+ (void)reportError:(id)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3 assertInDebug:(BOOL)arg4;

@end
