//
//  LanguageOutputDelegate.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 10.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol LanguageOutputDelegate <NSObject>

- (void)didLanguageChanged;

- (void)didBackPressed;

@end
