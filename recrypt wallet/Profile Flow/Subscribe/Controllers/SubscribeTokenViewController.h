//
//  SubscribeTokenViewController.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 03.03.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SubscribeTokenDataDisplayManagerDark.h"
#import "SubscribeTokenOutputDelegate.h"
#import "SubscribeTokenOutput.h"

@interface SubscribeTokenViewController : BaseViewController <SubscribeTokenDataDisplayManagerDelegate, SubscribeTokenOutput>

@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;
@property (strong, nonatomic) NSArray <Contract *> *filteredTokensArray;

- (void)updateTable;


@end
