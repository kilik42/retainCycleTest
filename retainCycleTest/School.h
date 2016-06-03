//
//  School.h
//  retainCycleTest
//
//  Created by marvin evins on 6/2/16.
//  Copyright © 2016 marvin evins. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Person;
@interface School : NSObject

@property (nonatomic, strong) Person *student;
@end
