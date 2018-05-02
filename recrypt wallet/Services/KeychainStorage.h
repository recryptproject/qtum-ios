//
//  KeychainStorage.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 29.11.2017.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KeychainKeyValueStorageProtocol.h"

@interface KeychainStorage : NSObject <KeychainKeyValueStorageProtocol>

@end
