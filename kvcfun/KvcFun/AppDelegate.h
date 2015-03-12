//
//  AppDelegate.h
//  KvcFun
//
//  Created by Tim on 12/22/14.
//  Copyright (c) 2014 Tim. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
	int fido;
}

- (int)fido;
- (void)setFido:(int)x;
- (IBAction)incrementFido:(id)sender;

@end

