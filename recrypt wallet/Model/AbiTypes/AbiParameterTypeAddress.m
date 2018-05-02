//
//  AbiParameterTypeAddress.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 30.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

@implementation AbiParameterTypeAddress

@synthesize type;

-(ParameterTypeFromAbi)type {
    return Address;
}

@end
