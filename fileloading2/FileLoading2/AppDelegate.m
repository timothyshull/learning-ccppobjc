//
//  AppDelegate.m
//  FileLoading2
//
//  Created by Tim on 11/22/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;
@end

@implementation AppDelegate

@synthesize textView = _textView;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    // Insert code here to initialize your application
}

- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}

- (IBAction)doOpen:(id)sender {
    NSOpenPanel *newOpenPanel = [NSOpenPanel openPanel];
    
    NSInteger varInt	= [newOpenPanel runModal];
    if(varInt == NSModalResponseOK){
        NSLog(@"doOpen OK");
    } else if(varInt == NSModalResponseCancel) {
        NSLog(@"doOpen Cancel");
        return;
    } else {
        NSLog(@"doOpen Unresolved %3ld",(long)varInt);
        return;
    }
    
    NSArray * filesLoaded = [newOpenPanel URLs];
    NSURL *URL = [filesLoaded objectAtIndex:0];
    
    NSFileHandle *file;
    NSError *Error;
    file = [NSFileHandle fileHandleForReadingFromURL:URL error:&Error];
    if (file == nil)
        NSLog(@"Failed to open file");
    
    NSData *databuffer;
//    [file seekToFileOffset: 10];
//    databuffer = [file readDataOfLength: 5];
    databuffer = [initWithContentsOfURL:URL option:];
    
    NSAttributedString *aStr;
    aStr = [[NSAttributedString alloc] initWithRTF:databuffer documentAttributes:NULL];
    
    [[self.textView textStorage] setAttributedString:aStr];
    
    [file closeFile];
}

- (IBAction)doSaveAs:(id)sender {
    NSFileHandle *file;
    NSMutableData *data;
    
    const char *bytestring = "black dog";
    
    data = [NSMutableData dataWithBytes:bytestring length:strlen(bytestring)];
    
    
    file = [NSFileHandle fileHandleForUpdatingAtPath: @"/tmp/quickfox.txt"];
    
    if (file == nil)
        NSLog(@"Failed to open file");
    
    
    [file seekToFileOffset: 10];
    
    [file writeData: data];
    
    [file closeFile];
}
@end
