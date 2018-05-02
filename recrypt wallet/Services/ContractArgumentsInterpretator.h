//
//  ContractArgumentsInterpretator.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 18.05.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbiinterfaceItem.h"

@interface ContractArgumentsInterpretator : NSObject

- (NSData *)contactArgumentsFromDictionary:(NSDictionary *) dict;

- (NSData *)contactArgumentsFromArrayOfValues:(NSArray *) values andArrayOfTypes:(NSArray *) types;

- (NSArray *)аrrayFromContractArguments:(NSData *) data andInterface:(AbiinterfaceItem *) interface;

@end
