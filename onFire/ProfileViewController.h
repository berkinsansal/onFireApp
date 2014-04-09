//
//  ProfileViewController.h
//  onFire
//
//  Created by Berkin Sansal on 26.03.2014.
//  Copyright (c) 2014 Berkin Sansal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProfileViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) NSMutableArray *friends;
@property (nonatomic, strong) IBOutlet UITableView *tableView;
@property (nonatomic, strong) IBOutlet UIImageView *userPic;
@property (nonatomic, strong) IBOutlet UILabel *name;
@property (nonatomic, strong) IBOutlet UILabel *about;
@property (nonatomic, strong) IBOutlet UISegmentedControl *segmentedControl;

@end