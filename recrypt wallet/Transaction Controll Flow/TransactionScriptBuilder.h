//
//  TransactionScriptBuilder.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 06.09.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TransactionScriptBuilder : NSObject

- (BTCScript *)createContractScriptWithBiteCode:(NSData *) bitcode
									andGasLimit:(RECRYPTBigNumber *) aGasLimit
									andGasPrice:(RECRYPTBigNumber *) aGasPrice;

- (BTCScript *)sendContractScriptWithBiteCode:(NSData *) bitcode
						   andContractAddress:(NSData *) address
								  andGasLimit:(RECRYPTBigNumber *) aGasLimit
								  andGasPrice:(RECRYPTBigNumber *) aGasPrice;

@end
