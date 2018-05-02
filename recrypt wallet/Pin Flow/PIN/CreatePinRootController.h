//
//  CreatePinRootController.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 14.12.16.
//  Copyright © 2016 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PinViewController.h"

@protocol PinCoordinator;

@interface CreatePinRootController : UINavigationController <PinCoordinator>

@property (nonatomic, copy) void (^createPinCompletesion)(void);
@property (assign, nonatomic) BOOL animating;


@end
