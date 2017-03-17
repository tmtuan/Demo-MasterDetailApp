//
//  Ceo.h
//  Demo-MasterDetailApp
//
//  Created by ThaoLT on 3/14/17.
//  Copyright © 2017 tmtuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Ceo : NSObject

@property (nonatomic, readwrite, copy) NSString *name;
@property (nonatomic, readwrite) UIImage *image;

- (id)initWithName:(NSString *)name;

@end
