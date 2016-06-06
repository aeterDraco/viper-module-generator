//
// Created by AUTHOR on DATE.
// Copyright (c) YEAR TEAM. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "VIPERInteractorIO.h"
#import "VIPERWireframeInterface.h"
#import "VIPERPresenterInterface.h"

@interface VIPERPresenter: NSObject <VIPERPresenterInterface>

@property (nonatomic, weak) id <VIPERViewControllerInput> viewController;
@property (nonatomic, strong) id <VIPERInteractorInput> interactor;
@property (nonatomic, strong) id <VIPERWireframeInput> wireframe;

@end


