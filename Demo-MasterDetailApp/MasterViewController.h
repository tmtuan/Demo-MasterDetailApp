//
//  MasterViewController.h
//  Demo-MasterDetailApp
//
//  Created by ThaoLT on 3/10/17.
//  Copyright © 2017 tmtuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

