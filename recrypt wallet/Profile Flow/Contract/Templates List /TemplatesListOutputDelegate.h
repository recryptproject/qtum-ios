//
//  TemplatesListOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 28.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol TemplatesListOutputDelegate <NSObject>

- (void)didSelectTemplateIndexPath:(NSIndexPath *) indexPath withName:(TemplateModel *) templateModel;

- (void)didPressedBack;

@end
