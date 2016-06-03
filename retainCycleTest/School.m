//
//  School.m
//  retainCycleTest
//
//  Created by marvin evins on 6/2/16.
//  Copyright © 2016 marvin evins. All rights reserved.
//

#import "School.h"
#import "Person.h"

@implementation School:NSObject

-(void) initData{
    
    self.student = [[Person alloc]init];
    [self.student initData];
}

@end
