//
//  AppDelegate.h
//  GuitarTuner
//
//  Created by Tim on 12/2/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "PdAudioController.h"

@class GTViewController;

@interface GTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) GTViewController *viewController;

@property (strong, nonatomic, readonly) PdAudioController *audioController;

@end

