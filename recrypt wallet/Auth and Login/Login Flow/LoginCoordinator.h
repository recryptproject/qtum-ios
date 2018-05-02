//
//  LoginCoordinator.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 21.02.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LoginCoordinator;

@protocol LoginCoordinatorDelegate <NSObject>

- (void)coordinatorDidLogin:(LoginCoordinator *) coordinator;

- (void)coordinatorDidCanceledLogin:(LoginCoordinator *) coordinator;

@end

@interface LoginCoordinator : BaseCoordinator <Coordinatorable>

@property (weak, nonatomic) id <LoginCoordinatorDelegate> delegate;

- (instancetype)initWithParentViewContainer:(UIViewController *) containerViewController;

@end
