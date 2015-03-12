//
//  AppDelegate.m
//  FileLoading
//
//  Created by Tim on 11/21/14.
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
    NSLog(@"doOpen");
    NSOpenPanel *tvarNSOpenPanelObj	= [NSOpenPanel openPanel];
    NSInteger tvarNSInteger	= [tvarNSOpenPanelObj runModal];
    if(tvarNSInteger == NSModalResponseOK){
        NSLog(@"doOpen we have an OK button");
    } else if(tvarNSInteger == NSModalResponseCancel) {
        NSLog(@"doOpen we have a Cancel button");
        return;
    } else {
        NSLog(@"doOpen tvarInt not equal 1 or zero = %3ld",(long)tvarNSInteger);
        return;
    }
    
    NSString *stringFromFileAtURL;
    
    NSArray * tvarFilename = [tvarNSOpenPanelObj URLs];
    for(int i = 0; i < [tvarFilename count]; i++){
        NSURL *URL = [tvarFilename objectAtIndex:i];
        stringFromFileAtURL = [NSString stringWithContentsOfURL:URL encoding:NSUTF8StringEncoding error:nil];
    }
    
    [self.textView insertText:stringFromFileAtURL];
    
    NSLog(@"Our file contains this: %@", stringFromFileAtURL);
    NSLog(@"doOpen filename = %@",tvarFilename);
}

- (IBAction)doSaveAs:(id)sender {
    NSLog(@"doSaveAs");
    NSSavePanel *tvarNSSavePanelObj	= [NSSavePanel savePanel];

    NSInteger tvarInt	= [tvarNSSavePanelObj runModal];
    if(tvarInt == NSModalResponseOK){
        NSLog(@"doSaveAs we have an OK button");
    } else if(tvarInt == NSModalResponseCancel) {
        NSLog(@"doSaveAs we have a Cancel button");
        return;
    } else {
        NSLog(@"doSaveAs tvarInt not equal 1 or zero = %3ld",(long)tvarInt);
        return;
    }
    
    NSURL * tvarFilename = [tvarNSSavePanelObj URL];
    
    NSString * tvarFilenameString;
    tvarFilenameString = [tvarFilename absoluteString];
    NSLog(@"doSaveAs filename = %@",tvarFilenameString);
    
    NSString * stringFromTextView = [self.textView string];
    NSLog(@"Our file contains this: %@", stringFromTextView);
    
    NSError *error;
    [@"Write me to file" writeToFile:tvarFilenameString atomically:YES encoding: NSUTF8StringEncoding error:&error];
    
    [stringFromTextView writeToFile:tvarFilename atomically:YES encoding:NSUTF8StringEncoding error:nil];
}
@end




