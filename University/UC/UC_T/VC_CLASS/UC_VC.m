//
//  UC_VC.m
//  University
//
//  Created by wangkuncheng on 16/11/21.
//  Copyright © 2016年 CocoaKC. All rights reserved.
//

#import "UC_VC.h"

@interface UC_VC ()

@end

@implementation UC_VC

#pragma mark - LifeCycle

- (void)viewDidLoad {
    
    [super viewDidLoad];
    
    self.view.backgroundColor = COLOR_FOR_BG;
    
    self.edgesForExtendedLayout = UIRectEdgeNone;
    
    self.view.translatesAutoresizingMaskIntoConstraints = NO;
    
    self.navigationController.navigationBar.hidden = YES;
    
    self.KCNavView.backgroundColor = COLOR_FOR_APP;
    
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
    [self.view endEditing:YES];
    
}

-(UIStatusBarStyle)preferredStatusBarStyle
{
    return UIStatusBarStyleLightContent;
}

- (UIImageView *)KCNavView{
    
    if (!_KCNavView) {
        _KCNavView = [[UIImageView alloc]initWithFrame:CGRectMake(X_OFF_SET, Y_OFF_SET, SCREEN_WIDTH, NAV_HEIGHT)];
        _KCNavView.userInteractionEnabled = YES;
        [self.view addSubview:_KCNavView];
    }
    return _KCNavView;
    
}
- (UILabel *)KCTitleLable{
    
    if (!_KCTitleLable) {
        _KCTitleLable = [[UILabel alloc]initWithFrame:CGRectMake(SCALE_SIZE(2)-60, 30, 120, 30)];
        _KCTitleLable.font = SYSTEM_BOLD_FONT(TWO_SIZE);
        _KCTitleLable.textColor = WHITE_COLOR;
        _KCTitleLable.textAlignment = NSTextAlignmentCenter;
        [self.KCNavView addSubview:_KCTitleLable];
    }
    return _KCTitleLable;
}


@end
