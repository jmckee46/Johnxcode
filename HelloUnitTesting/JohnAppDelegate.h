//
//  JohnAppDelegate.h
//  HelloUnitTesting
//
//  Created by John McKee on 11/5/12.
//  Copyright (c) 2012 John McKee. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JohnViewController;

@interface JohnAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) JohnViewController *viewController;

@end
