//
//  AlgoController.h
//  Calculator
//
//  Created by Maheshwari, Navodit on 11/14/19.
//  Copyright © 2019 Sutherland, Zachary. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AlgoController : UIViewController<UITableViewDelegate,UITableViewDataSource,UISearchBarDelegate>
{
    NSArray *tableData;
    BOOL isFiltered;
    
}

@property (strong, nonatomic) IBOutlet UISearchBar *searchBar;
@property (strong, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)addObjectButton:(UIButton *)sender;

@end
