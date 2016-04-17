//
// Created by AUTHOR on DATE
// Copyright (c) YEAR TEAM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "VIPERViewInterface.h"

@protocol VIPERModuleInterface;

@interface VIPERViewController : UIViewController <VIPERViewInterface>

@property (nonatomic, strong) id<VIPERModuleInterface> presenter;

@end
