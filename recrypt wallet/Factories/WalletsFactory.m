//
//  WalletsFactory.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 19.04.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

@interface WalletsFactory ()

@end

@implementation WalletsFactory

- (Wallet *)createNewWalletWithName:(NSString *) name pin:(NSString *) pin {
	Wallet *wallet = [[Wallet alloc] initWithName:name pin:pin];
	return wallet;
}

- (Wallet *)createNewWalletWithName:(NSString *) name pin:(NSString *) pin seedWords:(NSArray *) seedWords {

	if (!pin || !seedWords) {
		return nil;
	}
	Wallet *newWallet = [[Wallet alloc] initWithName:name pin:pin seedWords:seedWords];
	return newWallet;
}

@end
