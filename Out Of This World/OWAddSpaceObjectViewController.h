//
//  OWAddSpaceObjectViewController.h
//  Out Of This World
//
//  Created by Juha Näppi on 16.9.2014.
//  Copyright (c) 2014 Kamuli Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OWAddSpaceObjectViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UITextField *nicknameTextField;
@property (strong, nonatomic) IBOutlet UITextField *diameterTextField;
@property (strong, nonatomic) IBOutlet UITextField *temperatureTextField;
@property (strong, nonatomic) IBOutlet UITextField *numberOfMoonsTextField;
@property (strong, nonatomic) IBOutlet UITextField *interstingFactTextField;
- (IBAction)cancelButtonPressed:(UIButton *)sender;
- (IBAction)addButtonPressed:(UIButton *)sender;

@end
