//
//  HTHTTPPhotoInfo.h
//  HTHttp
//
//  Created by Wangliping on 16/1/7.
//  Copyright © 2016年 NetEase. All rights reserved.
//

#import "HTHTTPModel.h"

@interface HTHTTPPhotoInfo : HTHTTPModel

@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, copy) NSString *thumbImageUrl;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *comment;
@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *author;

+ (RKMapping *)manuallyMapping;

@end
