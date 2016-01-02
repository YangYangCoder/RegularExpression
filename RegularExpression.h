//
//  RegularExpression.h
//  RegularExpression
//
//  Created by 杨洋 on 16/1/2.
//  Copyright © 2016年 杨洋. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RegularExpression : NSObject
+ (BOOL)validatePhone:(NSString *)phone;

+ (BOOL)validatePassword:(NSString *)password;

+ (BOOL)validateEmail:(NSString *)email;
@end
