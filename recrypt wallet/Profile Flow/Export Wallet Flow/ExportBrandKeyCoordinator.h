//
//  ExportWalletCoordinator.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 12.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ExportBrandKeyCoordinator;

@protocol ExportBrandKeyCoordinatorDelegate <NSObject>

- (void)coordinatorDidEnd:(ExportBrandKeyCoordinator *) coordinator;

@end

@interface ExportBrandKeyCoordinator : BaseCoordinator <Coordinatorable>

@property (weak, nonatomic) id <ExportBrandKeyCoordinatorDelegate> delegate;

- (instancetype)initWithNavigationController:(UINavigationController *) navigationController;

@end
