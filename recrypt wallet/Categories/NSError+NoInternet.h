//
//  NSError+NoInternet.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 03.06.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSError (NoInternet)

- (BOOL)isNoInternetConnectionError;

@end
