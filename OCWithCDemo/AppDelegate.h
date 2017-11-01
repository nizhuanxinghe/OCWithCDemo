//
//  AppDelegate.h
//  OCWithCDemo
//
//  Created by 褚文斌 on 17/11/1.
//  Copyright © 2017年 褚文斌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

