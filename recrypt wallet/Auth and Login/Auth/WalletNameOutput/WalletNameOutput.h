//
//  WalletNameOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 10.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WalletNameOutputDelegate.h"

@protocol WalletNameOutput <NSObject>

@property (weak, nonatomic) id <WalletNameOutputDelegate> delegate;

@end
