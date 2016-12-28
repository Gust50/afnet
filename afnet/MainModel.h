//
//  MainModel.h
//  afnet
//
//  Created by kobe on 16/12/28.
//  Copyright © 2016年 Gust50. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MJExtension.h>
@interface MainModel : NSObject
@property(nonatomic,strong)NSMutableArray *data;
@end

@interface entitiesModel : NSObject
@property(nonatomic,strong)NSMutableArray *hashtags;
@property(nonatomic,strong)NSMutableArray *links;
@end

@interface dataModel : NSObject
@property(nonatomic,strong)NSString *canonical_url;
@property(nonatomic,strong)NSString *created_at;
@property(nonatomic,strong)entitiesModel *entities;
@end

@interface linkModel : NSObject
@property(nonatomic,strong)NSString *len;
@property(nonatomic,strong)NSString *pos;
@property(nonatomic,strong)NSString *text;
@property(nonatomic,strong)NSString *url;
@end
