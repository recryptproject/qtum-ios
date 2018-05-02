//
//  WalletBalancesObject.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 09.11.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WalletBalancesObject : NSObject

@property (copy, nonatomic) NSString *shortBalanceStringBalance;
@property (copy, nonatomic) NSString *longBalanceStringBalance;
@property (copy, nonatomic) NSString *addressString;
@property (strong, nonatomic) RECRYPTBigNumber *balance;

@end
