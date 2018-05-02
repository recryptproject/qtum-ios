//
//  TokenFunctionViewController.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 19.05.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "InterfaceInputFormModel.h"
#import "ContractCoordinator.h"
#import "ContractFunctionsOutput.h"

@class Token;

@interface TokenFunctionViewController : BaseViewController <ContractFunctionsOutput>

@end
