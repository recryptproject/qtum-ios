//
//  CallContractFacadeService.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 29.11.2017.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^CreateContractHandler)(TransactionManagerErrorType errorType,
                                     BTCTransaction *transaction,
                                     NSString *hashTransaction,
                                     RECRYPTBigNumber *estimatedValue);

typedef void(^CallFunctionHandler)(TransactionManagerErrorType errorType,
                                   BTCTransaction *transaction,
                                   NSString *hashTransaction,
                                   RECRYPTBigNumber *estimatedFee);

typedef void(^QueryFunctionHandler)(NSString* result,
                                    NSError *error);

typedef void(^ExistingContractHandler)(BOOL exist,
                                    NSError *error);

@interface CallContractFacadeService : NSObject

- (void)createSmartContractWithTemplate:(NSString *) templatePath
                               andArray:(NSArray *) args
                                    fee:(RECRYPTBigNumber *) fee
                               gasPrice:(RECRYPTBigNumber *) gasPrice
                               gasLimit:(RECRYPTBigNumber *) gasLimit
                             andHandler:(CreateContractHandler) completion;

-(void)callContractFunctionWithItem:(AbiinterfaceItem *) item
                             andParam:(NSArray<ResultTokenInputsModel *> *) inputs
                            andAmount:(RECRYPTBigNumber*) amount
                            fromAddress:(NSString*) fromAddress
                             andToken:(Contract *) contract
                               andFee:(RECRYPTBigNumber *) fee
                          andGasPrice:(RECRYPTBigNumber *) gasPrice
                          andGasLimit:(RECRYPTBigNumber *) gasLimit
                        andHandler:(CallFunctionHandler) completion;

-(void)queryContractFunctionWithItem:(AbiinterfaceItem *) item
                            andParam:(NSArray<ResultTokenInputsModel *> *) inputs
                            andToken:(Contract *) contract
                          andHandler:(QueryFunctionHandler) completion;

-(void)checkContractWithAddress:(NSString *) contractAddress
                     andHandler:(ExistingContractHandler) completion;

@end
