//
//  ScheduleViewController.h
//  EAFITENSE
//
//  Created by Sergio Botero on 6/26/11.
//  Copyright 2011 Sergiobuj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBServiceCentral.h"

@interface ScheduleViewController : UITableViewController <SBServiceCentralDelegate>{
    NSMutableArray * dataArray;
	UIActivityIndicatorView * spinner;
}

@property (nonatomic, retain) NSMutableArray * dataArray;
- (void) loadInformation ;
@end
