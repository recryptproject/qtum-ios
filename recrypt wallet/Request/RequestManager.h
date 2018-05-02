//
//  RequestManager.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 20.05.17.
//  Copyright © 2016 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Requestable.h"

extern NSString *const TCAAuthFailed;

@interface RequestManager : NSObject <Requestable>

- (instancetype)initWithBaseUrl:(NSString *) baseUrl;

@end
