//
//  FileIOController.h
//  Calculator
//
//  Created by Joseph, Andrew on 11/14/19.
//  Copyright © 2019 Sutherland, Zachary. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FileIOController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *tableData;
}

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@end
