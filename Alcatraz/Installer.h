//
//  Installer.h
//  Alcatraz
//
//  Created by Marin Usalj on 4/17/13.
//  Copyright (c) 2013 mneorr.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Package.h"

@protocol Installer <NSObject>
- (void)installPackage:(Package *)package error:(NSError **)error;
@end