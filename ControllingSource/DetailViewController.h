//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Jabez on 2/28/14.
//  Copyright (c) 2014 Jabez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
