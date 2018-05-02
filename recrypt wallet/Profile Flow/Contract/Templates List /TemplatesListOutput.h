//
//  TemplatesListOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 28.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TemplatesListOutputDelegate.h"
#import "TemplateModel.h"
#import "Presentable.h"

@protocol TemplatesListOutput <Presentable>

@property (copy, nonatomic) NSArray <TemplateModel *> *templateModels;
@property (weak, nonatomic) id <TemplatesListOutputDelegate> delegate;

@end
