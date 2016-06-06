//
//  Created by AUTHO on DATE.
//  Copyright © YEAR TEAM. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol VIPERDataManagerInput;
@protocol VIPERDataManagerOutput;

@protocol VIPERDataManagerInterface <VIPERDataManagerInput>

@property (nonatomic, weak) id<VIPERDataManagerOutput> interactor;

-(void)setInteractor:(id<VIPERDataManagerOutput>)interactor;

@end

@protocol VIPERDataManagerInput <NSObject>

@end

@protocol VIPERDataManagerOutput <NSObject>

@end
