//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSError, NSString;

@protocol XCTMessagingRole_UIAutomation
- (id)_XCT_getProgressForLaunch:(id)arg1;
- (id)_XCT_terminateProcess:(id)arg1;
- (id)_XCT_launchProcessWithPath:(NSString *)arg1 bundleID:(NSString *)arg2 arguments:(NSArray *)arg3 environmentVariables:(NSDictionary *)arg4;
- (id)_XCT_initializationForUITestingDidFailWithError:(NSError *)arg1;
- (id)_XCT_didBeginInitializingForUITesting;
@end
