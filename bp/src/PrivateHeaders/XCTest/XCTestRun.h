//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, XCTIssue, XCTest, XCTestObservationCenter;

@interface XCTestRun : NSObject
{
    _Bool _hasBeenSkipped;
    _Bool _hasStarted;
    _Bool _hasStopped;
    _Bool _hasExpectedFailure;
    XCTest *_test;
    unsigned long long _executionCount;
    unsigned long long _failureCount;
    unsigned long long _unexpectedExceptionCount;
    double _startTimeInterval;
    double _stopTimeInterval;
    XCTIssue *_candidateIssue;
    unsigned long long __runCount;
    unsigned long long _executionCountBeforeCrash;
    unsigned long long _skipCountBeforeCrash;
    unsigned long long _expectedFailureCountBeforeCrash;
    unsigned long long _failureCountBeforeCrash;
    unsigned long long _unexpectedExceptionCountBeforeCrash;
}

+ (id)testRunWithTest:(id)arg1;
- (void).cxx_destruct;
@property unsigned long long unexpectedExceptionCountBeforeCrash; // @synthesize unexpectedExceptionCountBeforeCrash=_unexpectedExceptionCountBeforeCrash;
@property unsigned long long failureCountBeforeCrash; // @synthesize failureCountBeforeCrash=_failureCountBeforeCrash;
@property unsigned long long expectedFailureCountBeforeCrash; // @synthesize expectedFailureCountBeforeCrash=_expectedFailureCountBeforeCrash;
@property unsigned long long skipCountBeforeCrash; // @synthesize skipCountBeforeCrash=_skipCountBeforeCrash;
@property unsigned long long executionCountBeforeCrash; // @synthesize executionCountBeforeCrash=_executionCountBeforeCrash;
@property unsigned long long _runCount; // @synthesize _runCount=__runCount;
@property(retain) XCTIssue *candidateIssue; // @synthesize candidateIssue=_candidateIssue;
@property _Bool hasExpectedFailure; // @synthesize hasExpectedFailure=_hasExpectedFailure;
@property _Bool hasStopped; // @synthesize hasStopped=_hasStopped;
@property _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property double stopTimeInterval; // @synthesize stopTimeInterval=_stopTimeInterval;
@property double startTimeInterval; // @synthesize startTimeInterval=_startTimeInterval;
@property _Bool hasBeenSkipped; // @synthesize hasBeenSkipped=_hasBeenSkipped;
@property unsigned long long unexpectedExceptionCount; // @synthesize unexpectedExceptionCount=_unexpectedExceptionCount;
@property unsigned long long failureCount; // @synthesize failureCount=_failureCount;
@property unsigned long long executionCount; // @synthesize executionCount=_executionCount;
@property(readonly) XCTest *test; // @synthesize test=_test;
- (void)_handleIssue:(id)arg1;
- (void)_recordIssue:(id)arg1;
- (void)recordIssue:(id)arg1;
- (void)recordExpectedFailure:(id)arg1;
- (void)recordSkipWithDescription:(id)arg1 sourceCodeContext:(id)arg2;
- (unsigned long long)expectedFailureCount;
@property(readonly) unsigned long long skipCount;
@property(readonly) _Bool hasSucceeded;
@property(readonly) unsigned long long testCaseCount;
@property(readonly) unsigned long long totalFailureCount;
- (void)stop;
- (void)start;
@property(readonly, copy) NSDate *stopDate;
@property(readonly, copy) NSDate *startDate;
@property(readonly) double testDuration;
@property(readonly) double totalDuration;
@property(readonly) XCTestObservationCenter *observationCenter;
- (id)description;
- (id)initWithTest:(id)arg1;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;

@end

