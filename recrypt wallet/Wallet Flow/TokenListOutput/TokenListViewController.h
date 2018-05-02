//
//  TokenListViewController.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 19.05.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TokenListOutput.h"

@interface TokenListViewController : BaseViewController <UITableViewDelegate, UITableViewDataSource, TokenListOutput>

@property (copy, nonatomic) NSArray<Contract *> *tokens;
@property (weak, nonatomic) id <TokenListOutputDelegate> delegate;

@end
