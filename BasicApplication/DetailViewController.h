//
//  DetailViewController.h
//  BasicApplication
//
//  Created by Faij Ali on 02/08/13.
//  Copyright (c) 2013 Faij Ali. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
