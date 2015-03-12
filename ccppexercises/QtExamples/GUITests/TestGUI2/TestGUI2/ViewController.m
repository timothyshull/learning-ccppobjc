//
//  ViewController.m
//  TestGUI2
//
//  Created by Tim on 10/24/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#import "ViewController.h"

@interface ViewController (){
IBOutlet UILabel * status;
}

@end

@implementation ViewController



- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)buttonPressed:(id)sender {
    static int count = 0;
    status.text = [NSString stringWithFormat:@"Button pressed %d:", ++count];
}

- (IBAction)sliderAction:(id)sender {
    UISlider * slider = sender;
    status.text = [NSString stringWithFormat:@"Slider: %f", slider.value];
}

@end
