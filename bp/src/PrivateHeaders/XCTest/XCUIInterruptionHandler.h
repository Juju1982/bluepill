//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface XCUIInterruptionHandler : NSObject
{
    CDUnknownBlockType _block;
    NSString *_handlerDescription;
    NSUUID *_identifier;
}

- (void).cxx_destruct;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *handlerDescription; // @synthesize handlerDescription=_handlerDescription;
@property(readonly, copy) CDUnknownBlockType block; // @synthesize block=_block;
- (id)initWithBlock:(CDUnknownBlockType)arg1 description:(id)arg2;

@end

