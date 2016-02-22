//
//  model.h
//  DAXIAN
//
//  Created by 杨建良 on 16/1/12.
//  Copyright © 2016年 J.L.Yang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface model : NSObject

@end

@interface songs : NSObject
@property (nonatomic,strong) NSString *song_id;
@property (nonatomic,strong) NSString *name;


@end


@interface model1 : model
@property (nonatomic,strong) NSString *succ;
@property (nonatomic,strong) songs    *song;
@property (nonatomic,strong) NSString *code;
@property (nonatomic,strong) NSString *timestamp;
@end


@interface model2 : model1
@property (nonatomic,strong) NSString *doubi;

@end