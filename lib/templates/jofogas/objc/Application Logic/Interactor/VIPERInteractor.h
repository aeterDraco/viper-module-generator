//
//  Created by AUTHOR on DATE.
//  Copyright © YEAR TEAM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VIPERInteractorIO.h"

@interface VIPERInteractor : NSObject<VIPERInteractorInput>

@property (nonatomic, weak) id<VIPERInteractorOutput> presenter;

@end
