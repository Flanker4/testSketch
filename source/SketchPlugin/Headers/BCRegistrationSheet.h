//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CHSheetController.h"

@class NSTextField;

@interface BCRegistrationSheet : CHSheetController
{
    NSTextField *licenseField;
}

+ (void)showPopupForRegistrationResult:(long long)arg1;

- (void)didCloseAllDocuments:(id)arg1;
- (void)quitAfterClosingAllWindows;
- (void)awakeFromNib;
- (void)openRecoveryPage:(id)arg1;
- (void)visitStore:(id)arg1;
- (void)cancel:(id)arg1;
- (void)registerAction:(id)arg1;

@end

