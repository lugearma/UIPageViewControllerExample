//
//  PageContentViewController.m
//  UIPageViewControllerExample
//
//  Created by Luis Arias on 02/06/16.
//  Copyright © 2016 Luis Arias. All rights reserved.
//

#import "PageContentViewController.h"

@interface PageContentViewController ()

@end

@implementation PageContentViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.labelTitle.text = self.titleText;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
