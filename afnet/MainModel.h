//
//  MainModel.h
//  afnet
//
//  Created by kobe on 16/12/28.
//  Copyright © 2016年 Gust50. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MJExtension.h>

@interface metaModel : NSObject
@property(nonatomic,strong)NSString *code;
@property(nonatomic,strong)NSString *max_id;
@property(nonatomic,strong)NSString *min_id;
@property(nonatomic,strong)NSString *more;
@end

@interface MainModel : NSObject
@property(nonatomic,strong)NSMutableArray *data;
@property(nonatomic,strong)metaModel *meta;
@end

@interface entitiesModel : NSObject
@property(nonatomic,strong)NSMutableArray *hashtags;
@property(nonatomic,strong)NSMutableArray *links;
@property(nonatomic,strong)NSMutableArray *mentions;
@end

@interface sourceModel : NSObject
@property(nonatomic,strong)NSString *client_id;
@property(nonatomic,strong)NSString *link;
@property(nonatomic,strong)NSString *name;
@end

@interface avatar_imageModel : NSObject
@property(nonatomic,strong)NSString *height;
@property(nonatomic,strong)NSString *is_defaults;
@property(nonatomic,strong)NSString *url;
@property(nonatomic,strong)NSString *width;
@end

@interface countsModel : NSObject
@property(nonatomic,strong)NSString *follewers;
@property(nonatomic,strong)NSString *following;
@property(nonatomic,strong)NSString *posts;
@property(nonatomic,strong)NSString *stars;
@end

@interface cover_imageModel : NSObject
@property(nonatomic,strong)NSString *height;
@property(nonatomic,strong)NSString *is_defaults;
@property(nonatomic,strong)NSString *url;
@property(nonatomic,strong)NSString *width;
@end

@interface descriptionModel : NSObject
@property(nonatomic,strong)entitiesModel *entities;
@end

@interface userModel : NSObject
@property(nonatomic,strong)avatar_imageModel *avatar_image;
@property(nonatomic,strong)NSString *canonical_url;
@property(nonatomic,strong)countsModel *counts;
@property(nonatomic,strong)cover_imageModel *cover_image;
@property(nonatomic,strong)NSString *created_at;
@property(nonatomic,strong)descriptionModel *description;
@end

@interface dataModel : NSObject
@property(nonatomic,strong)NSString *canonical_url;
@property(nonatomic,strong)NSString *created_at;
@property(nonatomic,strong)entitiesModel *entities;
@property(nonatomic,strong)NSString *html;
@property(nonatomic,strong)NSString *id;
@property(nonatomic,strong)NSString *machine_only;
@property(nonatomic,strong)NSString *num_replines;
@property(nonatomic,strong)NSString *num_reposts;
@property(nonatomic,strong)NSString *num_stars;
@property(nonatomic,strong)NSString *pagination_id;
@property(nonatomic,strong)sourceModel *source;
@property(nonatomic,strong)NSString *text;
@property(nonatomic,strong)NSString *thread_id;
@property(nonatomic,strong)userModel *user;
@end

@interface linkModel : NSObject
@property(nonatomic,strong)NSString *len;
@property(nonatomic,strong)NSString *pos;
@property(nonatomic,strong)NSString *text;
@property(nonatomic,strong)NSString *url;
@end
