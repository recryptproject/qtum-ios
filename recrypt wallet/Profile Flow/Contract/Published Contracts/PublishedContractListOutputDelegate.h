//
//  PublishedContractListOutputDelegates.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 28.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PublishedContractListOutputDelegate <NSObject>

- (void)didSelectContractWithIndexPath:(NSIndexPath *) indexPath withContract:(Contract *) contract;

- (void)didPressedBack;

- (void)didTrainingPass;

- (void)didUnsubscribeFromContract:(Contract *) contract;

- (void)didUnsubscribeFromContractPretendentWithTxHash:(NSString *) hexTransaction;

- (void)didUnsubscribeFromFailedContractPretendentWithTxHash:(NSString *) hexTransaction;


@end
