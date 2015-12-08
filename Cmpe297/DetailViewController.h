//
//  DetailViewController.h
//  Cmpe297
//
//  Created by Saraswathi Thanu on 12/8/15.
//  Copyright © 2015 Saraswathi Thanu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

