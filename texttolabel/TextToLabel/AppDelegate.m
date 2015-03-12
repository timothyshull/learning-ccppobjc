//
//  AppDelegate.m
//  TextToLabel
//
//  Created by Tim on 12/21/14.
//  Copyright (c) 2014 Tim. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;
@end

@implementation AppDelegate
@synthesize textField = _textField;
@synthesize labelShow = _labelShow;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
	// Insert code here to initialize your application
}

- (void)applicationWillTerminate:(NSNotification *)aNotification {
	// Insert code here to tear down your application
}

- (IBAction)buttonPush:(id)sender {
	NSString *inputText = [_textField stringValue];
	NSUInteger stringCnt = [inputText length];
	inputText = [NSString stringWithFormat:@"\"%@\" has %d characters.", inputText, (int)stringCnt];
	[_labelShow setStringValue:inputText];
}
@end
