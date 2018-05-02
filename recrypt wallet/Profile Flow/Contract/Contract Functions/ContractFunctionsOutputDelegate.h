//
//  ContractFunctionsOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 01.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ContractFunctionsOutputDelegate <NSObject>

- (void)didSelectFunctionIndexPath:(NSIndexPath *) indexPath withItem:(AbiinterfaceItem *) item andToken:(Contract *) token;

- (void)didDeselectFunctionIndexPath:(NSIndexPath *) indexPath withItem:(AbiinterfaceItem *) item;

- (void)didUnsubscribeFromDeletedContract:(Contract *) token;

@end
