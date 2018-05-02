//
//  ChooseReciveAddressOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 23.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ChooseReciveAddressOutputDelegate <NSObject>

- (void)didChooseAddress:(NSString *) address;

- (void)didBackPressed;

@end
