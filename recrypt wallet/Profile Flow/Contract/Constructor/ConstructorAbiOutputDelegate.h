//
//  ConstructorAbiOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 01.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResultTokenInputsModel.h"

@protocol ConstructorAbiOutputDelegate <NSObject>

- (void)createStepOneNextDidPressedWithInputs:(NSArray<ResultTokenInputsModel *> *) inputs andContractName:(NSString *) contractName;

- (void)didPressedBack;

@end
