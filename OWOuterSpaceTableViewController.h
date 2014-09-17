//
//  OWOuterSpaceTableViewController.h
//  Out Of This World
//
//  Created by Juha Näppi on 11.9.2014.
//  Copyright (c) 2014 Kamuli Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWAddSpaceObjectViewController.h"

@interface OWOuterSpaceTableViewController : UITableViewController <OWAddSpaceObjectViewConrollerDelegate>

@property (strong, nonatomic) NSMutableArray *planets;
@property (strong, nonatomic) NSMutableArray *addedSpaceObjects;

@end
