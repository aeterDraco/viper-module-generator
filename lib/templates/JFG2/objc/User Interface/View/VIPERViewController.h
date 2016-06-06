//
// Created by AUTHOR on DATE
// Copyright (c) YEAR TEAM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "VIPERViewControllerInterface.h"

@protocol VIPERViewControllerOutput;

@interface VIPERViewController : UIViewController <VIPERViewControllerInterface>

@property (nonatomic, strong) id<VIPERViewControllerOutput> presenter;

@end
