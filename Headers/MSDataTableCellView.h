//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class MSDataPreferenceItem, MSDataPreferencePane, MSDataPreview, NSButton, NSTextField;

@interface MSDataTableCellView : NSTableCellView
{
    NSTextField *_primaryTextField;
    NSTextField *_secondaryTextField;
    MSDataPreferencePane *_dataPreferencePane;
    MSDataPreview *_previewContainer;
    NSButton *_revealButton;
}

+ (void)initialize;
@property(nonatomic) __weak NSButton *revealButton; // @synthesize revealButton=_revealButton;
@property(nonatomic) __weak MSDataPreview *previewContainer; // @synthesize previewContainer=_previewContainer;
@property(nonatomic) __weak MSDataPreferencePane *dataPreferencePane; // @synthesize dataPreferencePane=_dataPreferencePane;
@property(nonatomic) __weak NSTextField *secondaryTextField; // @synthesize secondaryTextField=_secondaryTextField;
@property(nonatomic) __weak NSTextField *primaryTextField; // @synthesize primaryTextField=_primaryTextField;
- (void).cxx_destruct;
- (void)setObjectValue:(id)arg1;
@property(readonly, nonatomic) MSDataPreferenceItem *dataPreferenceItem;
- (void)setBackgroundStyle:(long long)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

@end

