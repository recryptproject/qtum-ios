//
//  ChoseTokenPaymentOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 04.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Presentable.h"

@protocol ChoseTokenPaymentOutputDelegate;
@protocol ChooseTokenPaymentDelegateDataSourceProtocol;

@class Contract;

@protocol ChoseTokenPaymentOutput <Presentable>

@property (weak, nonatomic) id <ChoseTokenPaymentOutputDelegate> delegate;
@property (strong, nonatomic) id <ChooseTokenPaymentDelegateDataSourceProtocol> delegateDataSource;

- (void)updateWithTokens:(NSArray <Contract *> *) tokens;

@end
