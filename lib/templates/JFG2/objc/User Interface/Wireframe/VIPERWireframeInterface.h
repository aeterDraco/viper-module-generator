//
//  Created by AUTHOR on DATE.
//  Copyright © YEAR TEAM. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol VIPERWireframeInput;
@protocol VIPERViewControllerInterface;
@protocol VIPERPresenterInterface;
@protocol VIPERInteractorInterface;
@protocol VIPERInteractorOutput;
@protocol VIPERDataManagerInterface;

@protocol VIPERWireframeInterface <VIPERWireframeInput>

@property (nonatomic, strong) id<VIPERViewControllerInterface> viewController;
@property (nonatomic, weak) id<VIPERInteractorOutput> presenter;

-(instancetype)initWithViewController:(id<VIPERViewControllerInterface>)viewController
                            presenter:(id<VIPERPresenterInterface>)presenter
                           interactor:(id<VIPERInteractorInterface>)interactor
                          dataManager:(id<VIPERDataManagerInterface>)dataManager;

@end


@protocol VIPERWireframeInput <NSObject>

@end


@protocol VIPERWireframeOutput <NSObject>

@end
