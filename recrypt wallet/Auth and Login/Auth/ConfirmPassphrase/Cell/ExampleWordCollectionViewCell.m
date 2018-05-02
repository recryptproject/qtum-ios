//
//  ExampleWordCollectionViewCell.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 03.01.2018.
//  Copyright © 2018 RECRYPT. All rights reserved.
//

#import "ExampleWordCollectionViewCell.h"

@interface ExampleWordCollectionViewCell()


@end

NSString* exampleWordCollectionViewCellIdentifire = @"exampleWordCollectionViewCellIdentifire";

@implementation ExampleWordCollectionViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    [self configTextLabel];
}

- (void)configTextLabel {
    
    self.backView.layer.cornerRadius = 5;
    self.backView.layer.masksToBounds = YES;
    self.backView.clipsToBounds = YES;
}

@end
