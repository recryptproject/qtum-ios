//
//  ContractFunctionDetailOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 01.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ContractFunctionDetailOutputDelegate.h"
#import "Presentable.h"
#import "AbiinterfaceItem.h"

@protocol ContractFunctionDetailOutput <Presentable>

@property (weak, nonatomic) id <ContractFunctionDetailOutputDelegate> delegate;
@property (strong, nonatomic) AbiinterfaceItem *function;
@property (nonatomic) BOOL fromQStore;
@property (weak, nonatomic) Contract *token;
@property (strong, nonatomic) NSArray <ContracBalancesObject *> *tokenBalancesInfo;

- (void)setQueryResult:(NSString *) result;

- (void)showLoader;

- (void)hideLoader;

- (void)showCompletedPopUp;

- (void)showErrorPopUp:(NSString *) message;

- (void)setMinFee:(RECRYPTBigNumber *) minFee andMaxFee:(RECRYPTBigNumber *) maxFee;

- (void)setMinGasPrice:(RECRYPTBigNumber *) min andMax:(RECRYPTBigNumber *) max step:(long) step;

- (void)setMinGasLimit:(RECRYPTBigNumber *) min andMax:(RECRYPTBigNumber *) max standart:(RECRYPTBigNumber *) standart step:(long) step;

- (void)showNotEnoughFeeAlertWithEstimatedFee:(RECRYPTBigNumber *) estimatedFee;

@end
