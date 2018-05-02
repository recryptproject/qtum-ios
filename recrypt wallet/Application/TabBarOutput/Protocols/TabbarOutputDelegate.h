//
//  TabbarOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 05.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol TabbarOutputDelegate <NSObject>

@required
- (void)didSelecteNewsTabWithController:(UIViewController *) controller;

- (void)didSelecteSendTabWithController:(UIViewController *) controller;

- (void)didSelecteProfileTabWithController:(UIViewController *) controller;

- (void)didSelecteWalletTabWithController:(UIViewController *) controller;

@end
