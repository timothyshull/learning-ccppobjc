//
//  LotteryEntry.h
//  lottery
//
//  Created by Tim on 12/20/14.
//  Copyright (c) 2014 Tim. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LotteryEntry : NSObject
{
NSDate *entryDate;
int firstNumber;
int secondNumber;
}
//-(void)prepareRandomNumbers;
-(void)setEntryDate:(NSDate *)date;
-(NSDate *)entryDate;
-(int)firstNumber;
-(int)secondNumber;
-(id)initWithEntryDate:(NSDate *)theDate;
@end
