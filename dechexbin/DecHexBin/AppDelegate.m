//
//  AppDelegate.m
//  DecHexBin
//
//  Created by Tim on 11/21/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#import "AppDelegate.h"

NSString * hexFromInt(unsigned int);

NSString * binFromInt(unsigned int);

unsigned intFromHex(NSString *);

int intFromBin(NSString *);

@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;
@end

@implementation AppDelegate

@synthesize textField1 = _textField1;
@synthesize textField2 = _textField2;
@synthesize textField3 = _textField3;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    LinkGroup *aLinkGroup = [[LinkGroup alloc] init];
    [self setLinkGroup:aLinkGroup];
    [self updateUserInterface];
}

- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}

- (IBAction)setValueFromValue:(id)sender {
    int val = [sender intValue];
    [self.linkGroup setVal:val];
    [self updateUserInterface];
}

- (IBAction)setValueFromHex:(id)sender {
    NSString *hexVal = [sender stringValue];
    
    int val = intFromHex(hexVal);
    
    [self.linkGroup setVal:val];
    [self updateUserInterface];
}

- (IBAction)setValueFromBin:(id)sender {
    NSString *binVal = [sender stringValue];
    
    int val = intFromBin(binVal);
    
    [self.linkGroup setVal:val];
    [self updateUserInterface];
}

- (void)updateUserInterface {
    int val = [self.linkGroup val];
    NSString * hexVal = hexFromInt((unsigned int) val);
    NSString * binVal = binFromInt((unsigned int) val);
    [self.textField1 setIntValue:val];
    [self.textField2 setStringValue:hexVal];
    [self.textField3 setStringValue:binVal];
}
@end

NSString * hexFromInt(unsigned int val) {
        return [NSString stringWithFormat:@"0x%X", val];
}

NSString * binFromInt(unsigned int val) {
    NSMutableString *string = [NSMutableString string];
    while (val) {
        [string insertString:(val & 1)? @"1": @"0" atIndex:0];
        val /= 2;
    }
    return string;
}

unsigned intFromHex(NSString* hexVal){
    unsigned val;
    NSScanner *scanner = [NSScanner scannerWithString:hexVal];
    
    [scanner scanHexInt:&val];
    
    return val;
}

int intFromBin(NSString* binVal){
    unichar aChar;
    int val = 0;
    int index;
    for (index = 0; index<[binVal length]; index++)
    {
        aChar = [binVal characterAtIndex: index];
        if (aChar == '1')
            val += 1;
        if (index+1 < [binVal length])
            val = val<<1;
    }
    return val;
}

