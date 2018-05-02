//
//  SubscribeTokenCoordinator.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 03.03.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseCoordinator.h"

@class SubscribeTokenCoordinator;

@protocol SubscribeTokenCoordinatorDelegate <NSObject>

- (void)didFinishCoordinator:(SubscribeTokenCoordinator *) coordinator;

@end

@interface SubscribeTokenCoordinator : BaseCoordinator <Coordinatorable>

- (instancetype)initWithNavigationController:(UINavigationController *) navigationController;

@end
