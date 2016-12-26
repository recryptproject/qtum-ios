//
//  TabBarController.m
//  qtum wallet
//
//  Created by Никита Федоренко on 26.12.16.
//  Copyright © 2016 Designsters. All rights reserved.
//

#import "TabBarController.h"
#import "ControllersFactory.h"

@interface TabBarController ()

@end

@implementation TabBarController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self configTabs];
    [self configTabBar];
}

#pragma mark - Configuration

-(void)configTabBar{
    self.tabBar.translucent = NO;
    self.tabBar.tintColor =  [UIColor colorWithRed:54/255. green:185/255. blue:200/255. alpha:1];
    self.tabBar.barTintColor = [UIColor colorWithRed:248/255. green:248/255. blue:248/255. alpha:1];
    self.tabBar.unselectedItemTintColor = [UIColor colorWithRed:83/255. green:97/255. blue:115/255. alpha:1];
}

-(void)configTabs{
    UIViewController* news = [[ControllersFactory sharedInstance] newsFlowTab];
    UIViewController* send = [[ControllersFactory sharedInstance] sendFlowTab];
    UIViewController* profile = [[ControllersFactory sharedInstance] profileFlowTab];
    UIViewController* history = [[ControllersFactory sharedInstance] historyFlowTab];
    
    [self setViewControllers:@[news,send,profile,history] animated:YES];
    news.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"News" image:[UIImage imageNamed:@"news"] tag:0];
    send.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"Send" image:[UIImage imageNamed:@"send"] tag:1];
    profile.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"Profile" image:[UIImage imageNamed:@"profile"] tag:2];
    history.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"History" image:[UIImage imageNamed:@"history"] tag:3];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}


@end
