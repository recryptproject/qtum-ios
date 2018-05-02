//
//  SourceCodeFormatService.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 13.11.2017.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SourceCodeFormatService : NSObject

- (NSAttributedString *)formattingSourceCodeStringWithString:(NSString *) sourceCode;

@end
