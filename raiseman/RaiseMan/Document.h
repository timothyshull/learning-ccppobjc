//
//  Document.h
//  RaiseMan
//
//  Created by Tim on 12/22/14.
//  Copyright (c) 2014 Tim. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class Person;

@interface Document : NSDocument
{
	NSMutableArray *employees;
	IBOutlet NSTableView *tableView;
	IBOutlet NSArrayController *employeeController;
}

- (IBAction)createEmployee:(id)sender;
- (void)setEmployees:(NSMutableArray *)a;
- (void)insertObject:(Person *)p inEmployeesAtIndex:(NSUInteger)index;
- (void)removeObjectFromEmployeesAtIndex:(NSUInteger)index;

@end

