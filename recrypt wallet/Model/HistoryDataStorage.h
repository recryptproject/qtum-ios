//
//  HistoryDataStorage.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 30.03.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HistoryElement.h"
#import "HistoryStorageProtocol.h"

@protocol Spendable;
@protocol HistoryElementProtocol;

extern NSString *const HistoryUpdateEvent;

@interface HistoryDataStorage : NSObject <HistoryStorageProtocol>


@end
