//
// Created by AUTHOR on DATE.
// Copyright (c) YEAR TEAM. All rights reserved.
//

#import "VIPERWireframe.h"
#import "VIPERViewControllerInterface.h"
#import "VIPERInteractorInterface.h"
#import "VIPERPresenterInterface.h"
#import "VIPERDataManagerInterface.h"

@implementation VIPERWireframe

-(instancetype)initWithViewController:(id<VIPERViewControllerInterface>)viewController
                            presenter:(id<VIPERPresenterInterface>)presenter
                           interactor:(id<VIPERInteractorInterface>)interactor
                          dataManager:(id<VIPERDataManagerInterface>)dataManager
{
    if (self = [super init]) {
        [viewController setPresenter:presenter];
        [presenter setViewController:viewController];
        [presenter setWireframe:(id<VIPERWireframeInput>)self];
        [presenter setInteractor:interactor];
        [interactor setPresenter:presenter];
        [interactor setDataManager:dataManager];
        [dataManager setInteractor:interactor];

        self.presenter = (id<VIPERWireframeOutput>)presenter;
        self.viewController = (id<VIPERViewControllerInterface>)viewController;
    }
   return self;
}

@end
