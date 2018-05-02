//
//  ContractCreationEndOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 01.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ContractCreationEndOutputDelegate <NSObject>

- (void)didPressedQuit;

- (void)finishStepFinishDidPressed:(RECRYPTBigNumber *) fee gasPrice:(RECRYPTBigNumber *) gasPrice gasLimit:(RECRYPTBigNumber *) gasLimit;

- (void)finishStepBackDidPressed;

- (void)finishStepCancelDidPressed;


@end
