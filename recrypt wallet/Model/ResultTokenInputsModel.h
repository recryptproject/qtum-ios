//
//  ResultTokenCreateInputModel.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 17.05.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResultTokenInputsModel : NSObject

@property (copy, nonatomic) NSString *name;
@property (strong, nonatomic) id value;

@end
