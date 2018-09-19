//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSInspectorItem.h"

@class NSButton, NSImage, NSString, NSTextField;

@interface MSHeaderInspectorItem : MSInspectorItem
{
    BOOL _buttonDisabled;
    BOOL _wantsSeparator;
    BOOL _wantsSeparatorInset;
    NSString *_labelText;
    NSString *_buttonToolTip;
    long long _buttonState;
    NSTextField *_label;
    NSButton *_headerButton;
    NSImage *_image;
    NSImage *_alternateImage;
    id _target;
    SEL _action;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSImage *alternateImage; // @synthesize alternateImage=_alternateImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSButton *headerButton; // @synthesize headerButton=_headerButton;
@property(retain, nonatomic) NSTextField *label; // @synthesize label=_label;
@property(nonatomic) BOOL wantsSeparatorInset; // @synthesize wantsSeparatorInset=_wantsSeparatorInset;
@property(nonatomic) BOOL wantsSeparator; // @synthesize wantsSeparator=_wantsSeparator;
@property(nonatomic) BOOL buttonDisabled; // @synthesize buttonDisabled=_buttonDisabled;
@property(nonatomic) long long buttonState; // @synthesize buttonState=_buttonState;
@property(retain, nonatomic) NSString *buttonToolTip; // @synthesize buttonToolTip=_buttonToolTip;
@property(retain, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (void).cxx_destruct;
- (void)updateDisplayedValues;
- (void)setButtonTarget:(id)arg1 action:(SEL)arg2 image:(id)arg3 alternate:(id)arg4;
- (void)viewDidLoad;

@end
