//
//  MasterViewController.h
//  Demo-MasterDetailApp
//
//  Created by ThaoLT on 3/10/17.
//  Copyright © 2017 tmtuan. All rights reserved.
//

#import <UIKit/UIKit.h>

NSDictionary *dict;

@class DetailViewController;
@class WebViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;
//@property (strong, nonatomic) WebViewController *webViewController;

@end

