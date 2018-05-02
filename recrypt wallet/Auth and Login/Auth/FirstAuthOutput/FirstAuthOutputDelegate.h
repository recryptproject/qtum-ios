//
//  FirstAuthOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 10.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol FirstAuthOutputDelegate <NSObject>

- (void)didLoginPressed;

- (void)didRestoreButtonPressed;

- (void)didCreateNewButtonPressed;

@end
