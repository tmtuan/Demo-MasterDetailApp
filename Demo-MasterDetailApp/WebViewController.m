//
//  WebViewController.m
//  Demo-MasterDetailApp
//
//  Created by ThaoLT on 3/12/17.
//  Copyright © 2017 tmtuan. All rights reserved.
//

#import "WebViewController.h"

@interface WebViewController ()

@end

@implementation WebViewController
@synthesize title = _title;


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view

    self.webView.scalesPageToFit = YES;
    self.webView.multipleTouchEnabled = YES;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewWillAppear:(BOOL)animated {
    
    [super viewWillAppear:animated];
    self.navigationItem.title = self.title;
    
    // Change "Steve Jobs" to "Steve_Jobs"
    NSString *str = [self.title stringByReplacingOccurrencesOfString:@" " withString:@"_"];
    
    //request web page
    [self.webView loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:[NSString stringWithFormat:@"https://en.wikipedia.org/wiki/%@", str]]]];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
