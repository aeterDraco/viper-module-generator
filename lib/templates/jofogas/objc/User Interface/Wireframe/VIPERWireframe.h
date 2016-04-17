//
// Created by AUTHOR on DATE.
// Copyright (c) YEAR TEAM. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "BaseModuleWireframe.h"

@class VIPERPresenter;
@class VIPERViewController;
@class RootWireframe;

@interface VIPERWireframe : BaseModuleWireframe

@property (nonatomic, strong) VIPERViewController *viewController;
@property (nonatomic, strong) VIPERPresenter *presenter;

- (id)initWithRootWireframe:(RootWireframe *)rootWireframe;

@end
