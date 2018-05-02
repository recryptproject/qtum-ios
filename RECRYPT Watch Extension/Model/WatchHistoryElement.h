//
//  WatchHistoryElement.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 14.06.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WatchHistoryElement : NSObject

@property (nonatomic) NSString *address;
@property (nonatomic) NSString *date;
@property (nonatomic) NSString *amount;
@property (nonatomic) BOOL send;

- (instancetype)initWithDictionary:(NSDictionary *) dictionary;

@end
