//
//  TuSDKPFEditSkinControllerBase.h
//  TuSDK
//
//  Created by Clear Hu on 15/9/8.
//  Copyright (c) 2015年 tusdk.com. All rights reserved.
//

#import "TuSDKCPFilterResultController.h"
/**
 *  多功能美肤基类
 */
@interface TuSDKPFEditSkinControllerBase : TuSDKCPFilterResultController
/**
 *  选中一个参数动作
 *
 *  @param btn 选中按钮
 */
- (void)onArgSelectedAction:(UIView *)btn;

/**
 *  获取当前选中动作
 *
 *  @return 当前动作索引
 */
- (NSUInteger)getCurrentAction;

/**
 *  设置配置视图隐藏状态
 *
 *  @param isHidden 是否隐藏
 */
- (void)setConfigViewHiddenState:(BOOL)isHidden;

/** 检测不到人脸信息禁用大眼、瘦脸按钮 */
- (void)disableFaceButtons;
@end