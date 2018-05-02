//
//  RequestManagerAdapter.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 21.03.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RECRYPTBigNumber;

@protocol RequestManagerAdapter <NSObject>

@required
- (id)adaptiveDataForHistory:(id) data;

- (id)adaptiveDataForOutputs:(id) data;

- (id)adaptiveDataForBalance:(id) balance;

- (RECRYPTBigNumber *)adaptiveDataForFeePerKb:(id) data;


@end
