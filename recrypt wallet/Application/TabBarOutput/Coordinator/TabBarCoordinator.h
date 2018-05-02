//
//  TabBarCoordinator.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 02.03.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseCoordinator.h"
#import "TabBarController.h"


@protocol TabBarCoordinatorDelegate <NSObject>

@required
- (void)createPaymentFromSendInfoItem:(SendInfoItem *) item;

@end

@protocol ApplicationCoordinatorDelegate;

@interface TabBarCoordinator : BaseCoordinator <Coordinatorable, TabBarCoordinatorDelegate, TabbarOutputDelegate>

@property (weak, nonatomic) id <ApplicationCoordinatorDelegate> delegate;

- (instancetype)initWithTabBarController:(UITabBarController <TabbarOutput> *) tabBarController;

- (void)startFromSendWithSendInfoItem:(SendInfoItem *) item;

- (void)showControllerByIndex:(NSInteger) index;

- (UIViewController *)getViewControllerByIndex:(NSInteger) index;

@end
