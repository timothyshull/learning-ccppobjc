//
//  AppDelegate.h
//  TextToLabel
//
//  Created by Tim on 12/21/14.
//  Copyright (c) 2014 Tim. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>
- (IBAction)buttonPush:(id)sender;
@property (weak) IBOutlet NSTextField *textField;
@property (weak) IBOutlet NSTextField *labelShow;
@end

