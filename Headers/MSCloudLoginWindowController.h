//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSString, NSTextField;
@protocol MSCloudLoginWindowControllerDelegate;

@interface MSCloudLoginWindowController : NSWindowController
{
    BOOL _isLoading;
    id <MSCloudLoginWindowControllerDelegate> _delegate;
    NSString *_email;
    NSString *_password;
    NSTextField *_titleLabel;
}

@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak id <MSCloudLoginWindowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelButtonClicked:(id)arg1;
- (void)openBrowserBucconClicked:(id)arg1;
- (void)signInButtonClicked:(id)arg1;
- (void)windowDidLoad;

@end

