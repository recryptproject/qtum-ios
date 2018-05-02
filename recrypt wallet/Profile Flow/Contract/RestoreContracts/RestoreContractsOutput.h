//
//  RestoreContractsOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 31.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RestoreContractsOutputDelegate.h"
#import "Presentable.h"

@protocol RestoreContractsOutput <Presentable>

@property (weak, nonatomic) id <RestoreContractsOutputDelegate> delegate;

@end
