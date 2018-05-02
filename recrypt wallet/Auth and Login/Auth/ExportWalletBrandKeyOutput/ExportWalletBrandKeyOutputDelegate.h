//
//  ExportWalletBrandKeyOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 10.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ExportWalletBrandKeyOutputDelegate <NSObject>

- (void)didContinueRepeateBrandKey;
- (void)didExitPressed;


@end
