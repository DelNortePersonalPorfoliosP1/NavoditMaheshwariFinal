//
//  FileIOControler.h
//  Calculator
//
//  Created by Maheshwari, Navodit on 11/14/19.
//  Copyright © 2019 Sutherland, Zachary. All rights reserved.
//

#ifndef FileIOControler_h
#define FileIOControler_h


#endif /* FileIOControler_h */

#import <UIKit/UIKit.h>

@interface FileIOController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *tableData;
}

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@end

