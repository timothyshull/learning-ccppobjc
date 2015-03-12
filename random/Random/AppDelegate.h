//
//  AppDelegate.h
//  Random
//
//  Created by Tim on 12/1/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (weak) IBOutlet NSTextField *textField;

- (IBAction)seed:(id)sender;
- (IBAction)random:(id)sender;

@end

