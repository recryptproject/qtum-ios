//
//  AbiParameterPrimitiveType.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 30.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

@implementation AbiParameterPrimitiveType

@synthesize size = _size, type;

-(ParameterTypeFromAbi)type {
    return Unknown;
}

- (instancetype)initWithSize:(NSUInteger) size {

	self = [super init];
	if (self) {
		_size = size;
	}
	return self;
}


@end
