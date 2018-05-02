//
//  SmartContractMenuOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 28.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SmartContractMenuOutputDelegate.h"

@protocol SmartContractMenuOutput <NSObject>

@property (weak, nonatomic) id <SmartContractMenuOutputDelegate> delegate;

@end
