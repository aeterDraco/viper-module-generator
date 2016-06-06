//
// Created by AUTHOR on DATE.
// Copyright (c) YEAR TEAM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VIPERWireframeInterface.h"

@protocol VIPERWireframeInterface;
@protocol VIPERViewControllerInterface;
@protocol VIPERWireframeOutput;

@interface VIPERWireframe : NSObject <VIPERWireframeInterface>

@property (nonatomic, strong) id<VIPERViewControllerInterface> viewController;
@property (nonatomic, weak) id<VIPERWireframeOutput> presenter;

-(instancetype)initWithViewController:(id<VIPERViewControllerInterface>)viewController
                            presenter:(id<VIPERPresenterInterface>)presenter
                           interactor:(id<VIPERInteractorInterface>)interactor
                          dataManager:(id<VIPERDataManagerInterface>)dataManager;

@end
