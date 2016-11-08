//
//  ViewController.h
//  DPCoreData
//
//  Created by Mrunalini on 06/11/16.
//  Copyright © 2016 Divya Patil. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "AddViewController.h"
#import "CustomTableViewCell.h"


@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
{
    NSMutableArray *tvArray;
    NSMutableArray *smartPhoneArray;
    NSMutableArray *acArray;
    UISegmentedControl *SegmentControl;

}

@property (strong, nonatomic) IBOutlet UITableView *myTableView;
- (IBAction)segmentFirst:(id)sender;
- (IBAction)actionAdd:(id)sender;

@end

