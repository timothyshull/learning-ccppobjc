//
//  Person.m
//  RaiseMan
//
//  Created by Tim on 12/22/14.
//  Copyright (c) 2014 Tim. All rights reserved.
//

#import "Person.h"

@implementation Person

@synthesize personName;
@synthesize expectedRaise;

- (id)init
{
	self = [super init];
	if (self) {
		expectedRaise = 0.05;
		personName = @"New Person";
	}
	return self;
}

-(void)encodeWithCoder:(NSCoder *)coder
{
	[coder encodeObject:personName forKey:@"personName"];
	[coder encodeFloat:expectedRaise forKey:@"expectedRaise"];
}

-(id)initWithCoder:(NSCoder *)coder {
	self = [super init]; if (self) {
		personName = [coder decodeObjectForKey:@"personName"];
		expectedRaise = [coder decodeFloatForKey:@"expectedRaise"];
	}
	return self;
}

@end
