//
//  WatchWallet.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 14.06.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WatchHistoryElement.h"

@interface WatchWallet : NSObject

@property (nonatomic) NSString *address;
@property (nonatomic) NSString *availableBalance;
@property (nonatomic) NSString *unconfirmedBalance;
@property (nonatomic) NSData *imageData;
@property (nonatomic) NSArray<WatchHistoryElement *> *history;

- (instancetype)initWithDictionary:(NSDictionary *) dictionary;

@end
