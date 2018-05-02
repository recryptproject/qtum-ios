//
//  AbiParameterTypeFixedArrayFixedBytes.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 30.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

@implementation AbiParameterTypeFixedArrayFixedBytes

- (instancetype)initWithSizeOfElements:(NSUInteger) elementSize {

	self = [super init];
	if (self) {

		_elementSize = elementSize;
	}
	return self;
}

@end
