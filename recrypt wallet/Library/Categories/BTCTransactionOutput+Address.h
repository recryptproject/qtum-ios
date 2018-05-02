//
//  BTCTransactionOutput+Address.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 17.04.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <CoreBitcoin/CoreBitcoin.h>

@interface BTCTransactionOutput (Address)

@property (copy, nonatomic) NSString *runTimeAddress;

@end
