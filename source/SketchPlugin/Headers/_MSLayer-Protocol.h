//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSModelObject-Protocol.h"
#import "MSRect-Protocol.h"
#import "MSExportOptions-Protocol.h"
@class NSDictionary, NSString;

@protocol _MSLayer <MSModelObject>
@property(readonly, nonatomic) id <MSRect> frameGeneric;
@property(readonly, nonatomic) id <MSExportOptions> exportOptionsGeneric;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) BOOL shouldBreakMaskChain;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) unsigned long long resizingType;
@property(readonly, nonatomic) NSString *originalObjectID;
@property(readonly, nonatomic) BOOL nameIsFixed;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) long long layerListExpandedType;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@end

