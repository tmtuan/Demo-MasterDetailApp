//
//  DetailViewController.h
//  Demo-MasterDetailApp
//
//  Created by ThaoLT on 3/10/17.
//  Copyright © 2017 tmtuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

