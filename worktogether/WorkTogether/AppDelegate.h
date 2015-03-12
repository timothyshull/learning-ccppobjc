//
//  AppDelegate.h
//  WorkTogether
//
//  Created by Tim on 11/21/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class LinkGroup;

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (weak) IBOutlet NSStepper *stepper;
@property (weak) IBOutlet NSTextField *textField;
@property (weak) IBOutlet NSSlider *slider;
@property (weak) IBOutlet NSTextField *textField2;
@property (weak) IBOutlet NSStepper *stepper2;
@property (weak) IBOutlet NSSlider *slider2;

@property (weak) IBOutlet NSTextField *textSum;

@property (strong) LinkGroup *linkGroup;
@property (strong) LinkGroup *linkGroup2;

- (IBAction)takeIntValueForValFrom:(id)sender;
- (IBAction)takeIntValueForValFrom2:(id)sender;
- (IBAction)initWithImage:(id)sender;
- (void)updateUserInterface;

@end

