//
// Created by AUTHOR on DATE.
// Copyright (c) YEAR TEAM. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol VIPERWireframeOutput;
@protocol VIPERInteractorOutput;
@protocol VIPERInteractorInput;
@protocol VIPERViewControllerOutput;
@protocol VIPERViewControllerInput;

@protocol VIPERPresenterInterface <NSObject, VIPERWireframeOutput, VIPERInteractorOutput, VIPERViewControllerOutput>

@property (nonatomic, weak) id <VIPERViewControllerInput> viewController;
@property (nonatomic, strong) id <VIPERInteractorInput> interactor;
@property (nonatomic, strong) id <VIPERWireframeInput> wireframe;

- (void)setViewController:(id<VIPERViewControllerInput>)viewController;
- (void)setInteractor:(id<VIPERInteractorInput>)interactor;
- (void)setWireframe:(id<VIPERWireframeInput>)wireframe;

@end
