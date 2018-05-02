//
//  RepeateOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 10.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RepeateOutputDelegate.h"

@protocol RepeateOutput <NSObject>

@property (weak, nonatomic) id <RepeateOutputDelegate> delegate;

- (void)endCreateWalletWithError:(NSError *) error;

- (void)showFailedStatus;


@end
