//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by afabian on 7/29/14.
//
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *name;
@property BOOL isCompleted;
@property (readonly) NSDate *creationDate;
@property (readonly) NSDate *completionDate;

@end
