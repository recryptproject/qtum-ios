//
//  CreatePinOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 10.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CreatePinOutputDelegate <NSObject>

- (void)didCancelPressedOnCreateWallet;

- (void)didEntererFirstPin:(NSString *) pin;

@end
