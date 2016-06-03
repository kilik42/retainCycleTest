//
//  Person.m
//  retainCycleTest
//
//  Created by marvin evins on 6/2/16.
//  Copyright © 2016 marvin evins. All rights reserved.
//

#import "Person.h"
#import "BackPack.h"
@implementation Person

-(void) initData{
    self.backpack = [[BackPack alloc]init];
    self.backpack.owner = self;
}

@end
