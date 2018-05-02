//
//  ContractCreationEndOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 01.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Presentable.h"
#import "ContractCreationEndOutputDelegate.h"
#import "ResultTokenInputsModel.h"

@protocol ContractCreationEndOutput <Presentable>

@property (weak, nonatomic) id <ContractCreationEndOutputDelegate> delegate;
@property (copy, nonatomic) NSArray<ResultTokenInputsModel *> *inputs;

- (void)showErrorPopUp:(NSString *) string;

- (void)showCompletedPopUp;

- (void)setMinFee:(RECRYPTBigNumber *) minFee andMaxFee:(RECRYPTBigNumber *) maxFee;

- (void)setMinGasPrice:(RECRYPTBigNumber *) min andMax:(RECRYPTBigNumber *) max step:(long) step;

- (void)setMinGasLimit:(RECRYPTBigNumber *) min andMax:(RECRYPTBigNumber *) max standart:(RECRYPTBigNumber *) standart step:(long) step;

@end
