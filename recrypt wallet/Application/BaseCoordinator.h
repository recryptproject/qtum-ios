//
//  BaseCoordinator.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 02.03.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Coordinatorable.h"

@interface BaseCoordinator : NSObject <Coordinatorable>

- (void)addDependency:(id <Coordinatorable>) coordinator;

- (void)removeDependency:(id <Coordinatorable>) coordinator;

- (void)removeAllDependencys;

@end
