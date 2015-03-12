//
//  AppDelegate.m
//  Random
//
//  Created by Tim on 12/1/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;
@end

@implementation AppDelegate

@synthesize textField = _textField;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    // Insert code here to initialize your application
}

- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}

- (IBAction)seed:(id)sender {
    // Seed the random number generator with the time srandom((unsigned)time(NULL));
    [self.textField setStringValue:@"Generator seeded"];
}

- (IBAction)random:(id)sender {
    // Generate a number between 1 and 100 inclusive
    int generated;
    generated = (int)(random() % 100) + 1;
    NSLog(@"generated = %d", generated);
    // Ask the text field to change what it is displaying
    [self.textField setIntValue:generated];
}

- (void)awakeFromNib {
    NSDate *now;
    now = [NSDate date];
    [self.textField setObjectValue:now];
}

@end
