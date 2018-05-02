//
//  NewsDataProvider.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 13.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RECRYPTNewsItem.h"
#import "RECRYPTFeedParcer.h"
#import "RECRYPTHtmlParcer.h"

@interface NewsFacedeService : NSObject

typedef void(^RECRYPTNewsItems)(NSArray <RECRYPTNewsItem *> *feeds);

typedef void(^gettingNewsFailedBlock)(void);


- (void)getNewsItemsWithCompletion:(RECRYPTNewsItems) completion andFailure:(gettingNewsFailedBlock) failure;

- (void)getTagsFromNews:(RECRYPTNewsItem *) newsItem withCompletion:(RECRYPTTagsItems) completion;

- (NSArray <RECRYPTNewsItem *> *)obtainNewsItems;

- (void)stop;

@end
