//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class NSString;

@interface PDFOperatorInfo : NSObject
{
    SEL _selector;
    CDUnknownFunctionPointerType _callback;
    NSString *_operatorName;
    NSString *_methodName;
}

@property(retain, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(retain, nonatomic) NSString *operatorName; // @synthesize operatorName=_operatorName;
@property(nonatomic) CDUnknownFunctionPointerType callback; // @synthesize callback=_callback;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;

- (id)description;

@end

