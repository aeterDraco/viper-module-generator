//
// Created by AUTHOR
// Copyright (c) YEAR TEAM. All rights reserved
//

@protocol VIPERViewControllerInput;
@protocol VIPERViewControllerOutput;

@protocol VIPERViewControllerInterface <VIPERViewControllerInput>

@property (nonatomic, strong) id<VIPERViewControllerOutput> presenter;

@end


@protocol VIPERViewControllerInput <NSObject>

@end

@protocol VIPERViewControllerOutput <NSObject>

@end
