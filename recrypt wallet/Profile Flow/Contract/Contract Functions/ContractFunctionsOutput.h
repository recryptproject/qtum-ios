//
//  ContractFunctionsOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 01.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Presentable.h"
#import "InterfaceInputFormModel.h"
#import "ContractFunctionsOutputDelegate.h"

@protocol ContractFunctionsOutput <Presentable>

@property (strong, nonatomic) InterfaceInputFormModel *formModel;
@property (weak, nonatomic) id <ContractFunctionsOutputDelegate> delegate;
@property (weak, nonatomic) Contract *token;

-(void)showUnsubscribeContractScreen;

@end
