//
//  NewsModel.h
//  NewsToday
//
//  Created by Mr_Jia on 2017/4/17.
//  Copyright © 2017年 Mr_Jia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NewsModel : NSObject
//用户名
@property (nonatomic,copy)NSString *name;

//文字内容
@property (nonatomic,copy)NSString *text;

//创建时间
@property (nonatomic,copy)NSString *created_at;

//图片
@property (nonatomic,copy)NSString *image0;

@property (nonatomic,copy)NSString *gifFistFrame;

//头像
@property (nonatomic,copy)NSString *profile_image;

//视频链接
@property (nonatomic,copy)NSString *videouri;

@property (nonatomic,copy)NSString *height;

@property (nonatomic,copy)NSString *width;

@property (nonatomic,copy)NSString *list;

@property (nonatomic,copy)NSString *is_gif;

@property (nonatomic,copy)NSString *id;
@end
