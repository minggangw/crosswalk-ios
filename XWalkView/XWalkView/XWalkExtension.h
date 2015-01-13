// Copyright (c) 2014 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#import <Foundation/Foundation.h>

@class XWalkChannel;

@interface XWalkExtension : NSObject

@property(nonatomic, weak) XWalkChannel* channel;
@property(nonatomic, assign) NSInteger instance;

- (NSString*)namespace;
- (void)setProperty:(NSString*)name value:(id)value;

- (void)invokeCallback:(UInt32)callId;
- (void)invokeCallback:(UInt32)callId key:(NSString*)key;
- (void)invokeCallback:(UInt32)callId key:(NSString*)key arguments:(NSArray*)arguments;
- (void)invokeCallback:(UInt32)callId index:(UInt32)index;
- (void)invokeCallback:(UInt32)callId index:(UInt32)index arguments:(NSArray*)arguments;
- (void)releaseArguments:(UInt32)callId;
- (void)invokeJavaScript:(NSString*)function;
- (void)invokeJavaScript:(NSString*)function arguments:(NSArray*)arguments;
- (void)evaluateJavaScript:(NSString*)string;
- (void)evaluateJavaScript:(NSString*)string onSuccess:(void(^)(id))onSuccess onError:(void(^)(NSError*))onError;

@end