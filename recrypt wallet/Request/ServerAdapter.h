//
//  ServerAdapter.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 21.03.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ServerAdapter : NSObject <RequestManagerAdapter>

- (id)adaptiveDataForHistory:(id) data;

- (id)adaptiveDataForOutputs:(id) data;

@end
