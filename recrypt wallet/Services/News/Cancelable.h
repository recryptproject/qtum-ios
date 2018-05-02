//
//  Cancelable.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 27.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Cancelable <NSObject>

- (void)cancel;

@end
