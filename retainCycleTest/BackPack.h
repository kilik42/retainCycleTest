//
//  BackPack.h
//  retainCycleTest
//
//  Created by marvin evins on 6/2/16.
//  Copyright © 2016 marvin evins. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Person;
@interface BackPack : NSObject
@property (nonatomic, weak) Person *owner;
@end
