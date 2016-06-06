//
//  VIPERDataManager.h
//
//  Created by AUTHOR on DATE.
//  Copyright © YEAR TEAM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VIPERDataManagerInterface.h"

@interface VIPERDataManager : NSObject<VIPERDataManagerInterface>

@property (nonatomic, weak) id<VIPERDataManagerOutput> interactor;

@end
