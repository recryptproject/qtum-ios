//
//  PaymentValuesManager.h
//  recrypt wallet
//
//  Created by Vladimir Sharaev on 04.10.2017.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

extern long const GasPriceStep;
extern long const GasLimitStep;

@interface PaymentValuesManager : NSObject

@property (nonatomic) RECRYPTBigNumber *maxFee;
@property (nonatomic) RECRYPTBigNumber *standartGasLimit;
@property (nonatomic) RECRYPTBigNumber *standartGasLimitForCreateContract;
@property (nonatomic) RECRYPTBigNumber *minGasLimit;
@property (nonatomic) RECRYPTBigNumber *minGasPrice;
@property (nonatomic) RECRYPTBigNumber *maxGasLimit;
@property (nonatomic) RECRYPTBigNumber *maxGasPrice;

- (void)loadDGPInfo;

@end
