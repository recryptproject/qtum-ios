//
//  BackupContractOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 01.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BackupContractOutputDelegate.h"
#import "Presentable.h"

@protocol BackupContractOutput <Presentable>

@property (weak, nonatomic) id <BackupContractOutputDelegate> delegate;

@end
