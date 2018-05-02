//
//  SmartContractMenuOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 28.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SmartContractMenuOutputDelegate <NSObject>

- (void)didSelectContractStore;

- (void)didSelectWatchContracts;

- (void)didSelectWatchTokens;

- (void)didSelectPublishedContracts;

- (void)didSelectNewContracts;

- (void)didSelectRestoreContract;

- (void)didSelectBackupContract;

- (void)didPressedQuit;

@end
