//
//  AppDelegate.h
//  SpeakLine
//
//  Created by Tim on 12/21/14.
//  Copyright (c) 2014 Tim. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, NSSpeechSynthesizerDelegate, NSTableViewDelegate>
{
	NSSpeechSynthesizer *_speechSynth;
	NSArray *_voices;
}
//@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTextField *textField;
@property (weak) IBOutlet NSButton *speakButton;
@property (weak) IBOutlet NSButton *stopButton;
@property (weak) IBOutlet NSTableView *tableView;
- (IBAction)sayIt:(id)sender;
- (IBAction)stopIt:(id)sender;

@end

