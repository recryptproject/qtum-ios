//
//  NSObject+Extension.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 26.12.16.
//  Copyright © 2016 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Extension)

- (NSString *)nameOfClass;

- (BOOL)isNull;

- (void)setAssociatedObject:(id) associatedObjec;

- (id)associatedObject;

- (UIViewController *)toPresent;

@end
