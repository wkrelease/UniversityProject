//
//  UCDefine.h
//  University
//
//  Created by wangkuncheng on 16/11/21.
//  Copyright © 2016年 CocoaKC. All rights reserved.
//

/** 工程名字 */
UIKIT_EXTERN NSString *const APP_NAME;
/** 设备UUID */
UIKIT_EXTERN NSString *const DEVICE_UUID;
/** 设备TOKEN */
UIKIT_EXTERN NSString *const DEVICE_TOKEN_STR;
/** X_OFF_SET */
UIKIT_EXTERN int8_t    const X_OFF_SET;
/** Y_OFF_SET */
UIKIT_EXTERN int8_t    const Y_OFF_SET;
/** NAV_HEIGHT */
UIKIT_EXTERN int8_t    const NAV_HEIGHT;
/** NAV_HEIGHT_20 */
UIKIT_EXTERN int8_t    const NAV_HEIGHT_20;
/** TAB_HEIGHT */
UIKIT_EXTERN int8_t    const TAB_HEIGHT;
/** 微信ID */
UIKIT_EXTERN NSString *const WECHAT_APP_ID;
/** 微信secret */
UIKIT_EXTERN NSString *const WECHAT_APP_SECRET;

UIKIT_EXTERN NSString *const UM_KEY;

UIKIT_EXTERN NSString *const HX_APP_KEY;

UIKIT_EXTERN NSString *const HX_CLIENT_ID;

UIKIT_EXTERN NSString *const HX_CLIENT_SECRET;

UIKIT_EXTERN NSString *const HX_USER_PASSWORD;

UIKIT_EXTERN NSString *const YW_APP_KEY;

UIKIT_EXTERN NSString *const YW_APP_SECRET;

UIKIT_EXTERN NSString *const APP_ID;

UIKIT_EXTERN NSString *const APP_STORE;

UIKIT_EXTERN NSString *const APP_STORE_COMMON;

UIKIT_EXTERN NSString *const STATUS_BAR_NOTIFICATION_STYLE;

//图片上传最大个数
UIKIT_EXTERN NSUInteger const MAX_PHOTO_COUNT;

#pragma mark - UserInfo

UIKIT_EXTERN NSString *const kUserInfo_avatar;
UIKIT_EXTERN NSString *const kUserInfo_uid;
UIKIT_EXTERN NSString *const kUserInfo_phone;
UIKIT_EXTERN NSString *const kUserInfo_password;
UIKIT_EXTERN NSString *const kUserInfo_login_salt;
UIKIT_EXTERN NSString *const kUserInfo_uname;
UIKIT_EXTERN NSString *const kUserInfo_email;
UIKIT_EXTERN NSString *const kUserInfo_sex;
UIKIT_EXTERN NSString *const kUserInfo_location;
UIKIT_EXTERN NSString *const kUserInfo_is_audit;
UIKIT_EXTERN NSString *const kUserInfo_is_active;
UIKIT_EXTERN NSString *const kUserInfo_is_init;
UIKIT_EXTERN NSString *const kUserInfo_ctime;
UIKIT_EXTERN NSString *const kUserInfo_identity;
UIKIT_EXTERN NSString *const kUserInfo_api_key;
UIKIT_EXTERN NSString *const kUserInfo_domain;
UIKIT_EXTERN NSString *const kUserInfo_province;
UIKIT_EXTERN NSString *const kUserInfo_city;
UIKIT_EXTERN NSString *const kUserInfo_area;
UIKIT_EXTERN NSString *const kUserInfo_reg_ip;
UIKIT_EXTERN NSString *const kUserInfo_timezone;
UIKIT_EXTERN NSString *const kUserInfo_is_del;
UIKIT_EXTERN NSString *const kUserInfo_first_letter;
UIKIT_EXTERN NSString *const kUserInfo_last_login_time;
UIKIT_EXTERN NSString *const kUserInfo_last_feed_id;
UIKIT_EXTERN NSString *const kUserInfo_last_post_time;
UIKIT_EXTERN NSString *const kUserInfo_search_key;
UIKIT_EXTERN NSString *const kUserInfo_invite_code;
UIKIT_EXTERN NSString *const kUserInfo_feed_email_time;
UIKIT_EXTERN NSString *const kUserInfo_send_email_time;
UIKIT_EXTERN NSString *const kUserInfo_openid;
UIKIT_EXTERN NSString *const kUserInfo_input_city;
UIKIT_EXTERN NSString *const kUserInfo_is_fixed;
UIKIT_EXTERN NSString *const kUserInfo_channel;
UIKIT_EXTERN NSString *const kUserInfo_imei;
UIKIT_EXTERN NSString *const kUserInfo_token;

#pragma mark - ReauestInfo

enum TDestinationID
{
    KUnknowDestination =                    -1,
    
    KHttpStation =                          0x0100,
    KHttpStation_Get,
    KHttpStation_Post,
    KHttpStation_UploadImage,
    KHttpStation_Post_FullPath,
    KHttpStation_Get_FullPath,
    
    
    KIMStation =                            0x0200,
    KIMStation_TurnOn,
    KIMStation_TurnOff,
    KIMStation_SendMessage,
    KIMStation_SendFlower,
    KIMStation_SendConfirm,
    KIMStation_SendUserAnswer,
    KIMStation_SaveOperate,
    
    KRegisterStation =                      0x0300,
    KPhoneUsableStation =                   0x0400,
    KHomeHotStation =                       0x0500,
    KHomeNewStation =                       0x0600,
    KHomeFollowStation =                    0x0700,
    KHomeMasterStation =                    0x0800,
    KLoginStation =                         0x0900,
    KPublishWeiBo =                         0x1000,
    KWorksMessStation =                     0x1100,
    KWeiBoMessStation =                     0x1200,
    KArticlMessStation =                    0x1300,
    KUserInfoMessStation =                  0x1400,
    
    KZhangYanListStation =                  0x1500,
    KFindPasswordStation =                  0x1600,
    
    KMessageWithWeiBo =                     0x2000,
    KMessageWithWorks =                     0x2100,
    KMessageWithArtical =                   0x2200,
    KMessageWithCommon =                    0x2300,
    KAddDigStation =                        0x2400,
    KCSystemNoticeStation =                 0x2500,
    
    KCSystemUpdateInfo =                    0x2600,
    
    KDiscoryWithPlayerStation =             0x3000,
    KDiscoryWithFamouserStation =           0x3100,
    KDiscoryWithDSWBStation =               0x3200,
    KDiscoryWithDSARTStation =              0x3300,
    KDiscoryWithDSWorkStation =             0x3400,
    
    KContactFollowStation =                 0x3500,
    KContactFansStation =                   0x3600,
    KContactFriendStation =                 0x3700,
    
    KContactCollectStation =                0x3800,
    KFeedBackStation =                      0x3900,
    
    KShareStation =                         0x4000,
    
    
    
    KConfirmAreaStation =                   0x9900,
    KConfirmArea_Show,
    KConfirmArea_Hide
};
