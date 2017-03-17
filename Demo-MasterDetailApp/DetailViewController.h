//
//  DetailViewController.h
//  Demo-MasterDetailApp
//
//  Created by ThaoLT on 3/10/17.
//  Copyright © 2017 tmtuan. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSDictionary *dict;

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (weak, nonatomic) IBOutlet UIImageView *portraitImage;



@end

