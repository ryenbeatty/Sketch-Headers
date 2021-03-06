//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_MSStylePart.h"

#import "MSStylePart-Protocol.h"
#import "NSCopying-Protocol.h"

@interface MSStylePart : _MSStylePart <NSCopying, MSStylePart>
{
}

+ (id)defaultStylePartForStyle:(id)arg1;
- (id)parentLayer;
- (id)parentStyle;
- (void)multiplyBy:(double)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)topViewForColorInspector:(id)arg1;
- (id)blendingViewForColorInspector:(id)arg1;
- (id)previewImageForSize:(struct CGSize)arg1 colorSpace:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) BOOL isEnabled;

@end

