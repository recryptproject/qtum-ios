//
//  ChoseTokenPaymentOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 04.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ChoseTokenPaymentOutputDelegate <NSObject>

@required
- (void)didPressedBackAction;

@end
