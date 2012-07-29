// Copyright 2011 Ping Labs, Inc. All rights reserved.

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

#import "ParseStarterProjectViewController.h"

@class ViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet ParseStarterProjectViewController *viewController;

- (void)subscribeFinished:(NSNumber *)result error:(NSError *)error;

@end
