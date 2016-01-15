//
//  ViewController.h
//  Reaction Game
//
//  Created by Roman on 1/14/16.
//  Copyright © 2016 Roman Puzey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    NSTimer *timer;
    int countInt;

    NSTimer * timerScore;
    int scoreInt;

}

@property (weak, nonatomic) IBOutlet UILabel *getreadyLabel;
@property (weak, nonatomic) IBOutlet UILabel *timerLabel;

- (IBAction)StartTop:(id)sender;


@end

