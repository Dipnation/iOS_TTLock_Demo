//
//  FirstViewController.h
//  sciener
//
//  Created by wan on 13-1-21.
//  Copyright (c) 2013年 wan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Tab0ViewController : UIViewController<UIActionSheetDelegate,UIAlertViewDelegate,UITableViewDelegate>
{

    
    
}

@property(nonatomic,strong) IBOutlet UITableView* customTableView;


-(void)rightAction:(id)sender;



@end
