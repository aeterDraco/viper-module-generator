//
//  Created by AUTHOR on DATE.
//  Copyright © YEAR TEAM. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol VIPERInteractorOutput;
@protocol VIPERInteractorInput;
@protocol VIPERDataManagerOutput;
@protocol VIPERDataManagerInput;

@protocol VIPERInteractorInterface <VIPERInteractorInput, VIPERDataManagerOutput>

@property (nonatomic, weak) id<VIPERInteractorOutput> presenter;
@property (nonatomic, strong) id<VIPERDataManagerInput> dataManager;

- (void)setPresenter:(id <VIPERInteractorOutput>)presenter;
- (void)setDataManager:(id <VIPERDataManagerInput>)dataManager;

@end


@protocol VIPERInteractorInput <NSObject>

@end


@protocol VIPERInteractorOutput <NSObject>

@end
