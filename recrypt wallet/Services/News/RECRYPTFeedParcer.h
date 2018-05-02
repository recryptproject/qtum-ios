//
//  RECRYPTFeedParcer.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 19.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RECRYPTFeedItem.h"
#import "Cancelable.h"

typedef void(^RECRYPTFeeds)(NSArray <RECRYPTFeedItem *> *feeds);

typedef void(^gettingFeedFailedBlock)(void);


@interface RECRYPTFeedParcer : NSObject <Cancelable>

- (void)parceFeedFromUrl:(NSString *) url withCompletion:(RECRYPTFeeds) completion andFailure:(gettingFeedFailedBlock) failure;

@end
