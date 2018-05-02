//
//  RestoreWalletOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 10.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RestoreWalletOutputDelegate.h"

@protocol RestoreWalletOutput <NSObject>

@property (weak, nonatomic) id <RestoreWalletOutputDelegate> delegate;

- (void)restoreSucces;

- (void)restoreFailed;

@end
