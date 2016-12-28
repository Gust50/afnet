//
//  MainModel.m
//  afnet
//
//  Created by kobe on 16/12/28.
//  Copyright © 2016年 Gust50. All rights reserved.
//

#import "MainModel.h"

@implementation MainModel
+ (NSDictionary *)mj_objectClassInArray{
    return @{@"data":@"dataModel"};
}
@end
@implementation dataModel

@end
@implementation entitiesModel
+ (NSDictionary *)mj_objectClassInArray{
    return @{@"links":@"linkModel"};
}
@end
@implementation linkModel

@end
