//
//  SZRightCell.h
//  LiWuShuo
//
//  Created by lx on 16/10/15.
//  Copyright © 2016年 BeiWo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SZRightCollV.h"

@interface SZRightCell : UITableViewCell



@property (weak, nonatomic) IBOutlet SZRightCollV *contentCollV;

@property (weak, nonatomic) IBOutlet UILabel *categoryLabel;




@end
