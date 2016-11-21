//
//  UCTool.h
//  University
//
//  Created by wangkuncheng on 16/11/21.
//  Copyright © 2016年 CocoaKC. All rights reserved.
//

#ifndef UCTool_h
#define UCTool_h

//**********************************************************************//

#define UC_PROPERTY(x)          @property(nonatomic, x)
#define UC_PROPERTY_STRONG      UC_PROPERTY(strong)
#define UC_PROPERTY_ASSIGN      UC_PROPERTY(assign)
#define UC_PROPERTY_WEAK        UC_PROPERTY(weak)
#define UC_PROPERTY_COPY        UC_PROPERTY(copy)

//**********************************************************************//

#define DEFAULTS                        [NSUserDefaults standardUserDefaults]

#define ShareApplication                [UIApplication sharedApplication]

#define ShareApplicationDelegate        ((AppDelegate *)[UIApplication sharedApplication].delegate)

#define NOTIFICATION_CENTER             [NSNotificationCenter defaultCenter]

//**********************************************************************//

#define R_G_B_COLOR(r,g,b)           [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]

#define R_G_B_A_COLOR(r,g,b,a)       [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]

#define CLEAR_COLOR                  [UIColor clearColor]

#define WHITE_COLOR                  [UIColor whiteColor]

#define COLOR_FOR_APP                 R_G_B_COLOR(62,54,51)

#define COLOR_FOR_APP_ALPHA           R_G_B_A_COLOR(62,54,51,0.5)

#define COLOR_FOR_BG                  R_G_B_COLOR(229,229,229)

#define COLOR_FOR_RED                 R_G_B_COLOR(164,0,4)

#define COLOR_FOR_RED_SELECT          R_G_B_COLOR(144,144,144)

#define COLOR_FOR_APP_TEXT            R_G_B_COLOR(152, 134, 112)

#define COLOR_FOR_SEL_TEXT            R_G_B_COLOR(255,238,198)

#define COLOR_FOR_LINE                R_G_B_COLOR(238,238,238)

#define COLOR_FOR_TEXT                R_G_B_COLOR(75,65,63)

#define COLOR_FOR_MESSAGE             R_G_B_COLOR(188,188,188)

//**********************************************************************//

#define SCREEN_BOUNDS           [UIScreen mainScreen].bounds

#define SCREEN_WIDTH            [UIScreen mainScreen].bounds.size.width

#define SCREEN_HEIGHT           [UIScreen mainScreen].bounds.size.height

#define SCALE_SIZE(A)           SCREEN_WIDTH/A

#define DEVICE_VERSION          [UIDevice currentDevice].systemVersion.floatValue

#define APP_VERSION             [[NSBundle mainBundle] objectForInfoDictionaryKey:(NSString*)kCFBundleVersionKey]

#define SYSTEM_FONT(A)          [UIFont systemFontOfSize:A]

#define SYSTEM_BOLD_FONT(A)     [UIFont boldSystemFontOfSize:A]

#define ONE_SIZE                20
#define TWO_SIZE                18
#define THREE_SIZE              16
#define FOUR_SIZE               14
#define FIVE_SIZE               12

#define KC_KEY_WINDOW           [UIApplication sharedApplication].keyWindow

#define KC_ROOT_WINDOW          [UIApplication sharedApplication].keyWindow

//**********************************************************************//

#ifdef DEBUG
#define KCLog(...) NSLog(__VA_ARGS__)
#else
#define KCLog(...)
#endif

#if TARGET_IPHONE_SIMULATOR
#define SIMULATOR 1
#elif TARGET_OS_IPHONE
#define SIMULATOR 0
#endif

#define KCLogFunc               KCLog(@"%s",__func__)

#define WS(weakSelf)            __weak __typeof(&*self)weakSelf = self;

#define WEAK_SELF               __weak typeof(self)weakSelf = self

#define STRONG_SELF             __strong typeof(weakSelf)self = weakSelf

//**********************************************************************//

#define ME_TAG              10
#define ME_BTN_TAG          20
#define ME_CONTACT_TAG      30
#define ME_WALLET_TAG       40
#define SEND_TAG            50
#define GO_RELEASE          60
#define NAV_TAG             70
#define DISCOVERY_NAV_TAG   80
#define HOME_SUB_NAV_TAG    90
#define PUBLISH_TOOLBAR_TAG 100
#define WEIBO_CONTENT_TAG   110
#define USER_INFO_TAG       120
#define ARTICAL_INFO_TAG    130
#define WORK_INFO_TAG       140



//**********************************************************************//


#define KCourse_Get_CourseList      0x01
#define KCourse_Get_MyCourseList    0x02



#endif /* UCTool_h */
