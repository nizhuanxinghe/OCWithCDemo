//
//  OCManager.m
//  OCWithCDemo
//
//  Created by 褚文斌 on 17/11/1.
//  Copyright © 2017年 褚文斌. All rights reserved.
//

#import "OCManager.h"

@implementation OCManager

+ (NSString *)getWord{
    NSArray *words = @[@"喝最烈的酒，日最野的狗", @"深情总是留不住，偏偏套路得人心", @"醉眼看人间，个个都温柔"];
    return words[arc4random() % words.count];
}

+ (NSString *)getName{
    NSArray *names = @[@"马化腾", @"马云", @"李彦宏"];
    return names[arc4random() % names.count];
}

@end
