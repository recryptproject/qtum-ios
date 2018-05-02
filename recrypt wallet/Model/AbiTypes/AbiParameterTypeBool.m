//
//  AbiParameterTypeBool.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 30.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

@implementation AbiParameterTypeBool

- (NSInteger)maxValueLenght {

	return 1;
}

-(ParameterTypeFromAbi)type {
    return Bool;
}

@end
