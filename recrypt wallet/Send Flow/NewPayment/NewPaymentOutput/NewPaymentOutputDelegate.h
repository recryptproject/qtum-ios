//
//  NewPaymentOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 04.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol NewPaymentOutputDelegate <NSObject>

- (void)didPresseQRCodeScaner;

- (void)didPresseChooseToken;

- (void)didSelectTokenAddress:(ContracBalancesObject*) tokenAddress;

- (void)didPresseSendActionWithAddress:(NSString *) address
							 andAmount:(RECRYPTBigNumber *) amount
								   fee:(RECRYPTBigNumber *) fee
							  gasPrice:(RECRYPTBigNumber *) gasPrice
							  gasLimit:(RECRYPTBigNumber *) gasLimit;

- (void)didViewLoad;

- (BOOL)shoudStartEditingAddress;

- (void)changeToStandartOperation;

@end
