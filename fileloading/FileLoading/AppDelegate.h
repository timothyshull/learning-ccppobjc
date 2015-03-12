//
//  AppDelegate.h
//  FileLoading
//
//  Created by Tim on 11/21/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>
@property (unsafe_unretained) IBOutlet NSTextView *textView;

- (IBAction)doOpen:(id)sender;
- (IBAction)doSaveAs:(id)sender;

@end

