//
//  ContractFunctionDetailOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 01.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbiinterfaceItem.h"
#import "ResultTokenInputsModel.h"

@protocol ContractFunctionDetailOutputDelegate <NSObject>

@optional
- (void)didCallFunctionWithItem:(AbiinterfaceItem *) item
					   andParam:(NSArray<ResultTokenInputsModel *> *) inputs
                      andAmount:(RECRYPTBigNumber *) amount
                    fromAddress:(NSString*) fromAddress
					   andToken:(Contract *) token
						 andFee:(RECRYPTBigNumber *) fee
					andGasPrice:(RECRYPTBigNumber *) gasPrice
					andGasLimit:(RECRYPTBigNumber *) gasLimit;

- (void)didQueryFunctionWithItem:(AbiinterfaceItem *) item
                        andParam:(NSArray<ResultTokenInputsModel *> *) inputs
                        andToken:(Contract *) token;


@end
