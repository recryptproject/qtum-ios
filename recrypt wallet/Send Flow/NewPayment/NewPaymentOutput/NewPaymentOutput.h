//
//  NewPaymentOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 04.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Presentable.h"
#import "NewPaymentOutputEntity.h"

@protocol NewPaymentOutputDelegate;

@protocol NewPaymentOutput <Presentable>

@property (weak, nonatomic) id <NewPaymentOutputDelegate> delegate;

- (void)updateWithEtity:(NewPaymentOutputEntity *) entity;

- (void)clearFields;

- (void)startEditingAddress;

- (void)setMinFee:(RECRYPTBigNumber *) minFee andMaxFee:(RECRYPTBigNumber *) maxFee;

- (void)setMinGasPrice:(RECRYPTBigNumber *) min andMax:(RECRYPTBigNumber *) max step:(long) step;

- (void)setMinGasLimit:(RECRYPTBigNumber *) min andMax:(RECRYPTBigNumber *) max standart:(RECRYPTBigNumber *) standart step:(long) step;

@end
