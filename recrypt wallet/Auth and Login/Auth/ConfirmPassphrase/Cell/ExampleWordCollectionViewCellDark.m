//
//  ExampleWordCollectionViewCellDark.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 04.01.2018.
//  Copyright © 2018 RECRYPT. All rights reserved.
//

#import "ExampleWordCollectionViewCellDark.h"

@implementation ExampleWordCollectionViewCellDark

- (void)configTextLabel {
    
    self.backView.layer.masksToBounds = YES;
    self.backView.clipsToBounds = YES;
}

@end
