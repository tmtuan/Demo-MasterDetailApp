//
//  WebViewController.h
//  Demo-MasterDetailApp
//
//  Created by ThaoLT on 3/12/17.
//  Copyright © 2017 tmtuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (nonatomic, copy, readwrite) NSString *title;


@end
