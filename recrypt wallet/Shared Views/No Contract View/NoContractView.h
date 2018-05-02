//
//  NoContractView.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 26.12.2017.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol NoContractViewDelegate <NSObject>

-(void)didUnsubscribeToken;

@end

@interface NoContractView : UIView

@property (weak, nonatomic) id <NoContractViewDelegate> delegate;

@end
