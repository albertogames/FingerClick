//
//  AppDelegate.h
//  FingerClick
//
//  Created by Alberto Ortega on 21/07/13.
//  Copyright (c) 2013 AIGames. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MenuController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) MenuController *_menuController;

@property (strong, nonatomic) UINavigationController *_uiNavigationController;


@end
 