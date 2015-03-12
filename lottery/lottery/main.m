//
//  main.m
//  lottery
//
//  Created by Tim on 12/20/14.
//  Copyright (c) 2014 Tim. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LotteryEntry.h"

int main(int argc, const char * argv[]) {
	@autoreleasepool {
		NSDate *now = [[NSDate alloc] init];
		NSCalendar *cal = [NSCalendar currentCalendar];
		NSDateComponents *weekComponents =[[NSDateComponents alloc] init];
		srandom((unsigned)time(NULL));
		NSMutableArray *array;
		array = [[NSMutableArray alloc] init];
		NSLog(@"first item = %@", [array objectAtIndex:0]);
		int i;
		for (i = 0; i < 10; i++) {
			[weekComponents setWeekOfMonth:i];
			// Create a date/time object that is 'i' weeks from now
			NSDate *iWeeksFromNow;
			iWeeksFromNow = [cal dateByAddingComponents:weekComponents toDate:now options:0];
			// Create a new instance of LotteryEntry
			LotteryEntry *newEntry = [[LotteryEntry alloc] initWithEntryDate:iWeeksFromNow];

			// Add the LotteryEntry object to the array
			[array addObject:newEntry];
		}
		for (LotteryEntry *entryToPrint in array) {
			// Display its contents
			NSLog(@"%@", entryToPrint);
		}
	}
	return 0;
}
