//
//  Spendable.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 19.04.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Managerable.h"
#import "HistoryElementProtocol.h"
#import "HistoryDataStorage.h"

@class RECRYPTBigNumber;

@protocol Managerable;

@protocol Spendable <NSObject>

@property (copy, nonatomic) NSString *name;
@property (strong, nonatomic) RECRYPTBigNumber *balance;
@property (strong, nonatomic) RECRYPTBigNumber *unconfirmedBalance;
@property (strong, nonatomic) id <HistoryStorageProtocol> historyStorage;
@property (copy, nonatomic) NSString *mainAddress;
@property (copy, nonatomic) NSString *symbol;
@property (weak, nonatomic) id <Managerable> manager;
@property (copy, nonatomic) NSArray <id <HistoryElementProtocol>> *historyArray;

- (void)updateBalanceWithHandler:(void (^)(BOOL success)) complete;

- (void)updateWithHandler:(void (^)(BOOL success)) complete;

- (void)updateHistoryWithHandler:(void (^)(BOOL success)) complete andPage:(NSInteger) page;

- (void)loadToMemory;

- (void)historyDidChange;

@end
