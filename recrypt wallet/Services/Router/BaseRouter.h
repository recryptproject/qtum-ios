//
//  BaseRouter.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 28.11.2017.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseRouterProtocol.h"

@interface BaseRouter : NSObject <BaseRouterProtocol>

- (instancetype)initWithNavigationController:(UINavigationController*) navigationController;

@end
