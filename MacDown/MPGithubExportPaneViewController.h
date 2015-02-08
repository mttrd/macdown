//
//  MPGithubExportPaneViewController.h
//  MacDown
//
//  Created by Matthew Reed on 2/7/15.
//  Copyright (c) 2015 Tzu-ping Chung . All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MPGithubExportPaneViewController : NSViewController

@property (weak) IBOutlet NSTextField *githubUsernameTextField;
@property (weak) IBOutlet NSTextField *githubPasswordTextField;
@property (weak) IBOutlet NSTextField *commitMessageTextField;
@property (weak) IBOutlet NSTextField *branchTextField;

@end
