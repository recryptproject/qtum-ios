//
//  SubscribeTokenDataDisplayManagerDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 27.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SubscribeTokenDataDisplayManagerDelegate <NSObject>

- (void)tableView:(UITableView *) tableView didSelectContract:(Contract *) contract;

@end
