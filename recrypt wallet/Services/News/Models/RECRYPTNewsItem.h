//
//  RECRYPTNewsItem.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 19.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RECRYPTFeedItem.h"
#import "RECRYPTHTMLTagItem.h"

@interface RECRYPTNewsItem : NSObject <NSCoding>

@property (nonatomic, strong) NSArray<RECRYPTHTMLTagItem *> *tags;
@property (nonatomic, strong, readonly) RECRYPTFeedItem *feed;
@property (nonatomic, strong, readonly) NSString *identifire;

- (instancetype)initWithTags:(NSArray<RECRYPTHTMLTagItem *> *) tags andFeed:(RECRYPTFeedItem *) feed;

@end
