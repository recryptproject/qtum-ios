//
//  RestoreWalletOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 10.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol RestoreWalletOutputDelegate <NSObject>

- (BOOL)checkWordsString:(NSString *) string;

- (void)didRestorePressedWithWords:(NSString *) string;

- (void)didRestoreWallet;

- (void)restoreWalletCancelDidPressed;

@end
