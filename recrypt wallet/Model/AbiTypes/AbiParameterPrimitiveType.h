//
//  AbiParameterPrimitiveType.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 30.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbiParameterProtocol.h"

@interface AbiParameterPrimitiveType : NSObject <AbiParameterProtocol>

- (instancetype)initWithSize:(NSUInteger) size;

@end
