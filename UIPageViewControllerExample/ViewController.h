//
//  ViewController.h
//  UIPageViewControllerExample
//
//  Created by Luis Arias on 02/06/16.
//  Copyright © 2016 Luis Arias. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageContentViewController.h"

@interface ViewController : UIViewController <UIPageViewControllerDataSource>

@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) NSArray *pageTitles;


@end

