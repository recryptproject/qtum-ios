//
//  NSOperationQueue+Timeout.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 01.12.2017.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSOperationQueue (Timeout)

- (NSOperation *)addOperationWithBlock:(void (^)(NSOperation *operation))block timeout:(CGFloat)timeout
                          timeoutBlock:(void (^)(void))timeoutBlock;

@end
