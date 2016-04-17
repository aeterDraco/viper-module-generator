//
// Created by AUTHOR on DATE.
// Copyright (c) YEAR TEAM. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "VIPERInteractorIO.h"
#import "VIPERModuleInterface.h"

@protocol VIPERViewInterface;
@class VIPERWireframe;

@interface VIPERPresenter: NSObject <VIPERInteractorOutput, VIPERModuleInterface>

@property (nonatomic, weak) id <VIPERViewInterface> viewController;
@property (nonatomic, strong) id <VIPERInteractorInput> interactor;
@property (nonatomic, weak) VIPERWireframe *wireframe;

@end


