//
//  AboutOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 28.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Presentable.h"
#import "AboutOutputDelegate.h"

@protocol AboutOutput <Presentable>

@property (weak, nonatomic) id <AboutOutputDelegate> delegate;

@end
