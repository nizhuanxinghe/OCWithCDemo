//
//  OCToCHandler.m
//  OCWithCDemo
//
//  Created by 褚文斌 on 17/11/1.
//  Copyright © 2017年 褚文斌. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OCManager.h"

const char* getUtf8Name(){
    return [[OCManager getName] UTF8String];
}

const char* getUtf8StrWord(){
    return [[OCManager getWord] UTF8String];
}
