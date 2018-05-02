//
//  TransactionManager.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 02.11.16.
//  Copyright © 2016 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TransactionBuilder.h"

@interface TransactionManager : NSObject

- (void)sendTransactionWalletKeys:(NSArray<BTCKey *> *) walletKeys
			   toAddressAndAmount:(NSArray *) amountsAndAddresses
							  fee:(RECRYPTBigNumber *) fee
					   andHandler:(void (^)(TransactionManagerErrorType errorType,
							   id response,
							   RECRYPTBigNumber *estimatedFee)) completion;

- (void)createSmartContractWithKeys:(NSArray<BTCKey *> *) walletKeys
						 andBitcode:(NSData *) bitcode
								fee:(RECRYPTBigNumber *) fee
						   gasPrice:(RECRYPTBigNumber *) gasPrice
						   gasLimit:(RECRYPTBigNumber *) gasLimit
						 andHandler:(void (^)(TransactionManagerErrorType errorType, BTCTransaction *transaction, NSString *hashTransaction, RECRYPTBigNumber *estimatedValue)) completion;

- (void)callContractWithAddress:(NSData *) contractAddress
					 andBitcode:(NSData *) bitcode
                         amount:(RECRYPTBigNumber *) amount
				  fromAddresses:(NSArray<NSString *> *) fromAddresses
					  toAddress:(NSString *) toAddress
					 walletKeys:(NSArray<BTCKey *> *) walletKeys
							fee:(RECRYPTBigNumber *) fee
					   gasPrice:(RECRYPTBigNumber *) gasPrice
					   gasLimit:(RECRYPTBigNumber *) gasLimit
					 andHandler:(void (^)(TransactionManagerErrorType errorType,
							 BTCTransaction *transaction,
							 NSString *hashTransaction,
							 RECRYPTBigNumber *estimatedFee)) completion;

- (void)sendTransactionToToken:(Contract *) token
					 toAddress:(NSString *) toAddress
						amount:(RECRYPTBigNumber *) amount
						   fee:(RECRYPTBigNumber *) fee
					  gasPrice:(RECRYPTBigNumber *) gasPrice
					  gasLimit:(RECRYPTBigNumber *) gasLimit
					andHandler:(void (^)(TransactionManagerErrorType errorType,
							BTCTransaction *transaction,
							NSString *hashTransaction,
							RECRYPTBigNumber *estimatedFee)) completion;

- (void)sendToken:(Contract *) token
	  fromAddress:(NSString *) fromAddress
		toAddress:(NSString *) toAddress
		   amount:(RECRYPTBigNumber *) amount
			  fee:(RECRYPTBigNumber *) fee
		 gasPrice:(RECRYPTBigNumber *) gasPrice
		 gasLimit:(RECRYPTBigNumber *) gasLimit
	   andHandler:(void (^)(TransactionManagerErrorType errorType,
			   BTCTransaction *transaction,
			   NSString *hashTransaction,
			   RECRYPTBigNumber *estimatedFee)) completion;

- (void)getFeePerKbWithHandler:(void (^)(RECRYPTBigNumber *feePerKb)) completion;


@end
