//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCloudViewController.h"

#import "MSCloudViewControllerDelegate.h"

@class MSCloudDocumentViewController, MSCloudUploadViewController, NSLayoutConstraint, NSString;

@interface MSCloudContainerViewController : MSCloudViewController <MSCloudViewControllerDelegate>
{
    NSLayoutConstraint *_uploadViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *uploadViewHeightConstraint; // @synthesize uploadViewHeightConstraint=_uploadViewHeightConstraint;

- (void)userAccountStatusDidChangeNotification:(id)arg1;
@property(readonly) MSCloudUploadViewController *uploadViewController;
@property(readonly) MSCloudDocumentViewController *documentViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeChildViewControllerAtIndex:(long long)arg1;
- (void)addChildViewController:(id)arg1;
- (void)updateViewConstraints;
- (void)setCloudController:(id)arg1;
- (void)dealloc;
- (struct CGSize)preferredContentSize;
- (void)updateShare;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)viewWillAppear;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

