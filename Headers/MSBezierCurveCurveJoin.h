//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBezierLineCurveJoin.h"

@interface MSBezierCurveCurveJoin : MSBezierLineCurveJoin
{
}

+ (id)segmentsWithIntersectionOfExtendTangentFromCurve:(id)arg1 withExtendedTangentFromCurve:(id)arg2;
+ (id)segmentsWithIntersectionOfMirrorOfCurve1:(id)arg1 withMirrorOfCurve2:(id)arg2;
+ (id)segmentsWithIntersectionOfCurve1:(id)arg1 withCurve2:(id)arg2;
+ (id)firstIntersectionOnSegment1InSet:(id)arg1;
+ (BOOL)checkLineLengthIsSaneForEndPoint:(struct CGPoint)arg1 endPoint2:(struct CGPoint)arg2 line1:(id)arg3 line2:(id)arg4;
+ (id)joinWithSegment1:(id)arg1 segment2:(id)arg2 strategy:(unsigned long long)arg3;

@end

