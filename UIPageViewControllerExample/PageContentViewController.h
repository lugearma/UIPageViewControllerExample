//
//  PageContentViewController.h
//  UIPageViewControllerExample
//
//  Created by Luis Arias on 02/06/16.
//  Copyright © 2016 Luis Arias. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageContentViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *labelTitle;
@property NSUInteger pageIndex;
@property NSString *titleText;

@end
