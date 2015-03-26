//
//  DetailViewController.h
//  iosCompetencyTest
//
//  Created by Dustin Flanary on 3/25/15.
//  Copyright (c) 2015 Dustin Flanary. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

