//
//  Async.h
//  Async
//
//  Created by Ryan Copley on 5/6/15.
//  Copyright (c) 2015 Ryan Copley. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlockSync : NSObject

+(void)waterfall:(NSArray*)calls error:(void (^)())error success:(void (^)())success;
+(void)forEach:(NSArray*)array call:(void (^)(id obj, void (^cb)()))eachCall error:(void (^)(id error, id failedObject))error done:(void (^)())done;

@end