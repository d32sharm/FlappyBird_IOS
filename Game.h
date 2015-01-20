//
//  Game.h
//  FlappyBird
//
//  Created by Dhruv Sharma on 2014-08-21.
//  Copyright (c) 2014 Dhruv Sharma. All rights reserved.
//

#import <UIKit/UIKit.h>

int BirdFlight;
int RandomBottomTunnelPosition;
int RandomTopTunnelPosition;
int ScoreNumber;
NSInteger HighScoreNumber;

@interface Game : UIViewController
{
    IBOutlet UIImageView *Bird;
    IBOutlet UIButton *StartGame;
    
    IBOutlet UIImageView *Background2;
    IBOutlet UIImageView *Background1;
    IBOutlet UIImageView *TunnelTop;
    IBOutlet UIImageView *TunnelBottom;
    IBOutlet UIImageView *Top;
    IBOutlet UIImageView *Bottom;
    IBOutlet UIButton *Exit;
    IBOutlet UILabel *ScoreBoard;
    
    
    NSTimer *BirdMovement;
    NSTimer *TunnelMovement;
    NSTimer *BackgroundMovement;
    
}

-(IBAction)StartGame:(id)sender;
-(void)BirdMoving;
-(void)TunnelMoving;
-(void)PlaceTunnels;
-(void)Score;
-(void)GameOver;


@end
