//
//  AbiParameterTypeFixedArray.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 30.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

@implementation AbiParameterTypeFixedArray

@synthesize size = _size;

- (instancetype)initWithSize:(NSUInteger) size {

	self = [super init];
	if (self) {
		_size = size;
	}
	return self;
}

@end
