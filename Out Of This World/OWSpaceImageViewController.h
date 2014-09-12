//
//  OWSpaceImageViewController.h
//  Out Of This World
//
//  Created by Juha Näppi on 12.9.2014.
//  Copyright (c) 2014 Kamuli Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong,nonatomic) UIImageView *imageView;
@property (strong, nonatomic) OWSpaceObject *spaceObject;


@end
