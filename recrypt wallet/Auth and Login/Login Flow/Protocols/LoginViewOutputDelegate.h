//
//  LoginViewOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 26.06.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol LoginViewOutputDelegate <NSObject>

- (void)passwordDidEntered:(NSString *) password;

- (void)confirmPasswordDidCanceled;

@end
