//
//  ChangePinOutput.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 11.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "ChangePinOutputDelegate.h"
#import "PasswordView.h"

@protocol ChangePinOutput <NSObject>

@property (assign, nonatomic) PinType type;

@property (nonatomic, weak) id <ChangePinOutputDelegate> delegate;
@property (weak, nonatomic) IBOutlet PasswordView *passwordView;

- (void)setCustomTitle:(NSString *) title;

@end
