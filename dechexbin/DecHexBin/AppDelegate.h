//
//  AppDelegate.h
//  DecHexBin
//
//  Created by Tim on 11/21/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "LinkGroup.h"

@class LinkGroup;

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (weak) IBOutlet NSTextField *textField1;
@property (weak) IBOutlet NSTextField *textField2;
@property (weak) IBOutlet NSTextField *textField3;

@property (strong) LinkGroup *linkGroup;

- (IBAction)setValueFromValue:(id)sender;
- (IBAction)setValueFromHex:(id)sender;
- (IBAction)setValueFromBin:(id)sender;

- (void)updateUserInterface;

@end

