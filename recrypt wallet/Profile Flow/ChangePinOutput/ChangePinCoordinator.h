//
//  ChangePinCoordinator.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 26.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ChangePinCoordinator;

@protocol ChangePinCoordinatorDelegate <NSObject>

- (void)coordinatorDidFinish:(ChangePinCoordinator *) coordinator;

@end

@interface ChangePinCoordinator : BaseCoordinator <Coordinatorable>

@property (weak, nonatomic) id <ChangePinCoordinatorDelegate> delegate;

- (instancetype)initWithNavigationController:(UINavigationController *) navigationController;

@end
