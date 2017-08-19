//
//  UIImage+ZXOthers.h
//  ZXCategories
//
//  Created by Apple on 2017/7/25.
//  Copyright © 2017年 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ZXOthers)
#pragma mark ------------------抗锯齿---------------
/**
 *  缩放动画会出现锯齿 用这个方法来抗锯齿
 *  相当于layer.allowsEdgeAntialiasing = true
 *
 *  @return 返回抗锯齿的image
 */
- (UIImage *)zx_antiAlias;

/**
 *  把颜色变成图片输出
 *
 *  @param color 颜色
 *  @return 转换出的图片
 */
+ (UIImage *)zx_imageWithColor:(UIColor *)color;
@end