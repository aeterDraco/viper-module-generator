//
// Created by AUTHOR on DATE.
// Copyright (c) YEAR TEAM. All rights reserved.
//

#import "VIPERInteractor.h"
#import "VIPERWireframe.h"
#import "VIPERViewInterface.h"
#import "VIPERViewController.h"
#import "VIPERPresenter.h"
#import "RootWireframe.h"
#import "BaseModuleWireframe_protected.h"


@implementation VIPERWireframe

@synthesize navigationController = _navigationController;

- (id)initWithRootWireframe:(RootWireframe *)rootWireframe
{
    if (self = [super initWithRootWireframe:rootWireframe]) {
            self.presenter = VIPERPresenter.new;
            self.presenter.viewController = self.viewController;
            self.presenter.wireframe = self;
            self.viewController.presenter = self.presenter;
            VIPERInteractor *interactor = VIPERInteractor.new;
            self.presenter.interactor = interactor;
            interactor.presenter = self.presenter;
    }        
   return self;
}


@end
