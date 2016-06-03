//
//  Person.h
//  retainCycleTest
//
//  Created by marvin evins on 6/2/16.
//  Copyright © 2016 marvin evins. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BackPack;

@interface Person : NSObject

@property (nonatomic, strong) BackPack *backpack;

-(void)initData;
@end
