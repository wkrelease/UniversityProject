//
//  UC_DETAIL_VC.m
//  University
//
//  Created by wangkuncheng on 16/11/21.
//  Copyright © 2016年 CocoaKC. All rights reserved.
//

#import "UC_DETAIL_VC.h"

@interface UC_DETAIL_VC ()

@property (nonatomic,strong)UIButton *backBtn;

@end

@implementation UC_DETAIL_VC

#pragma mark - LifeCycle

- (void)viewWillDisappear:(BOOL)animated{
    
    [super viewWillDisappear:animated];
    
    [self.view endEditing:YES];
    
}

- (void)viewDidLoad {
    
    [super viewDidLoad];
    
    WS(weakSelf);
    
    self.navigationController.interactivePopGestureRecognizer.enabled = YES;
    
    _backBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    _backBtn.frame = CGRectMake(0, 30, 100, 30);
    [_backBtn setImage:[UIImage imageNamed:@"button-ano-fh"] forState:UIControlStateNormal];
//    [[_backBtn rac_signalForControlEvents:UIControlEventTouchUpInside]subscribeNext:^(id x) {
//        [weakSelf.navigationController popViewControllerAnimated:YES];
//        [weakSelf dismissViewControllerAnimated:YES completion:nil];
//    }];
    _backBtn.imageEdgeInsets = UIEdgeInsetsMake(0, 0, 0, 70);
    [self.KCNavView addSubview:_backBtn];
    
}

- (void)HideBack{
    
    _backBtn.hidden = YES;
    
}


@end
