//
//  AppDelegate.h
//  FileLoading2
//
//  Created by Tim on 11/22/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>
@property (weak) IBOutlet NSMenuItem *Open;
@property (weak) IBOutlet NSMenuItem *SaveAs;
@property (unsafe_unretained) IBOutlet NSTextView *textView;

- (IBAction)doOpen:(id)sender;
- (IBAction)doSaveAs:(id)sender;

@end

