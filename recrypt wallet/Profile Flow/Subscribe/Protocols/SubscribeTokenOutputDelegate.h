//
//  SubscribeTokenOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 27.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SubscribeTokenOutputDelegate <NSObject>

- (void)didBackButtonPressed;

- (void)didSelectContract:(Contract *) contract;

@end
