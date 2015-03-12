//
//  AppDelegate.m
//  WorkTogether
//
//  Created by Tim on 11/21/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#import "AppDelegate.h"
#import "LinkGroup.h"

@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;
@end

@implementation AppDelegate

@synthesize textField = _textField;
@synthesize stepper = _stepper;
@synthesize slider = _slider;
@synthesize textField2 = _textField2;
@synthesize stepper2 = _stepper2;
@synthesize slider2 = _slider2;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    LinkGroup *aLinkGroup = [[LinkGroup alloc] init];
    [self setLinkGroup:aLinkGroup];
    [self updateUserInterface];
    
    LinkGroup *aLinkGroup2 = [[LinkGroup alloc] init];
    [self setLinkGroup2:aLinkGroup2];
    [self updateUserInterface];
}

- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}

- (IBAction)takeIntValueForValFrom:(id)sender {
    int newValue = [sender intValue];
    [self.linkGroup setVal:newValue];
    [self updateUserInterface];
}

- (IBAction)takeIntValueForValFrom2:(id)sender {
    int newValue = [sender intValue];
    [self.linkGroup2 setVal:newValue];
    [self updateUserInterface];
}

- (IBAction)initWithImage:(id)sender {
}

- (void)updateUserInterface {
    int val = [self.linkGroup val];
    [self.textField setIntValue:val];
    [self.slider setIntValue:val];
    [self.stepper setIntValue:val];
    
    int val2 = [self.linkGroup2 val];
    [self.textField2 setIntValue:val2];
    [self.slider2 setIntValue:val2];
    [self.stepper2 setIntValue:val2];
    
    [self.textSum setIntValue: (val + val2)];
}

@end
