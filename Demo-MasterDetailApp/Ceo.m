//
//  Ceo.m
//  Demo-MasterDetailApp
//
//  Created by ThaoLT on 3/14/17.
//  Copyright © 2017 tmtuan. All rights reserved.
//

#import "Ceo.h"

@implementation Ceo

@synthesize name = _name;
@synthesize image = _image;

- (id)initWithName:(NSString *)name
{
    if (self == [super init])
    {
        self.name = [name copy];
    }
    
    return self;
}

@end
