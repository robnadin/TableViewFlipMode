//
//  RPNTableViewController.h
//  TableViewFlipMode
//
//  Created by Rob on 01/04/2013.
//  Copyright (c) 2013 Rob Nadin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ModalViewDelegate <NSObject>

- (void)modalViewDone;

@end

@interface RPNTableViewController : UITableViewController <ModalViewDelegate>

@property (nonatomic, weak) id<ModalViewDelegate> delegate;

- (IBAction)didPressDone:(id)sender;

@end
