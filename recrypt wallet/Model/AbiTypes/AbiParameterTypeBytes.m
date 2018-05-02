//
//  AbiParameterTypeBytes.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 30.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

@implementation AbiParameterTypeBytes

@synthesize type;

-(ParameterTypeFromAbi)type {
    return Bytes;
}

@end
