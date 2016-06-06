//
//  Created by AUTHOR on DATE.
//  Copyright © YEAR TEAM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VIPERInteractorIO.h"
#import "VIPERDataManagerInterface.h"

@interface VIPERInteractor : NSObject<VIPERInteractorInput>

@property (nonatomic, weak) id<VIPERInteractorOutput> presenter;
@property (nonatomic, strong) id<VIPERDataManagerInput> dataManager;

@end
