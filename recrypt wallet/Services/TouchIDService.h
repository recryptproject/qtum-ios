//
//  TouchIDService.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 20.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, TouchIDCompletionType) {
	TouchIDCanceled,
	TouchIDDenied,
	TouchIDSuccessed
};

@interface TouchIDService : NSObject

- (BOOL)hasTouchId;

- (void)checkTouchIdWithText:(NSString *) text andCopmletion:(void (^)(TouchIDCompletionType type)) completion;

@end
