//
//  MasterViewController.h
//  BasicApplication
//
//  Created by Faij Ali on 02/08/13.
//  Copyright (c) 2013 Faij Ali. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
