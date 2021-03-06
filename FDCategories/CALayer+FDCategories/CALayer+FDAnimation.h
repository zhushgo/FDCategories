//
//  CALayer+FDAnimation.h
//  FDCategories
//
//  Created by fandy on 15/9/1.
//  Copyright © 2015年 fandy. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>


typedef NS_ENUM(NSUInteger, FDAnimKeyPathType) {
    FDAnimKeyPathTypeRotation, // 旋转
    FDAnimKeyPathTypeRotationX,
    FDAnimKeyPathTypeRotationY,
    FDAnimKeyPathTypeRotationZ,
    FDAnimKeyPathTypeScale,  // 缩放
    FDAnimKeyPathTypeScaleX,
    FDAnimKeyPathTypeScaleY,
    FDAnimKeyPathTypeScaleZ,
    FDAnimKeyPathTypeTranslation,// 平移
    FDAnimKeyPathTypeTranslationX,
    FDAnimKeyPathTypeTranslationY,
    FDAnimKeyPathTypeTranslationZ,
};

@interface CALayer (FDAnimation)

/**
 *  由FDAnimKeyPathType获取animationKeyPathString
 */
- (NSString *)fd_getAnimKeyPathType:(FDAnimKeyPathType)animKeyPathType;

/**
 *  对CAKeyframeAnimation的简单封装
 */
- (CAAnimation *)fd_addAnimationWithKeyPath:(FDAnimKeyPathType)keyPath values:(NSArray *)values duration:(NSTimeInterval)duration repeatCount:(NSUInteger)repeatCount;

/**
 *  自动旋转动画FDAnimKeyPathType 只能取FDAnimKeyPathTypeRotationX/Y/Z 非正常值返回nil
 */
-(CAAnimation *)fd_addReverseAnimation:(FDAnimKeyPathType)direction duration:(NSTimeInterval)duration isReverse:(BOOL)isReverse repeatCount:(NSUInteger)repeatCount timingFuncName:(NSString *)timingFuncName;


@end
