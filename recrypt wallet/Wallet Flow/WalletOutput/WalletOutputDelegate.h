//
//  WalletOutputDelegate.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 05.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol WalletOutputDelegate <NSObject>

@required
- (void)didReloadTableViewData;

- (void)didRefreshTableViewBalanceLocal:(BOOL) isLocal;

- (void)didShowQRCodeScan;

- (void)didShowAddressControl;


@end
