//
//  TokenDetailDataDisplayManager.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 24.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TokenDetailDisplayDataManagerDelegate.h"
#import "Contract.h"

@protocol TokenDetailDataDisplayManager <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, weak) id <TokenDetailDisplayDataManagerDelegate> delegate;
@property (nonatomic, strong) Contract *token;

@end
