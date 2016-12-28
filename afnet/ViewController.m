//
//  ViewController.m
//  afnet
//
//  Created by kobe on 16/12/28.
//  Copyright © 2016年 Gust50. All rights reserved.
//

#import "ViewController.h"
#import <AFNetworking.h>
#import <MJExtension.h>
#import "MainModel.h"
@interface ViewController ()
@property(nonatomic,strong)NSMutableArray *dataSource;
@end

@implementation ViewController
- (NSMutableArray *)dataSource{
    if (!_dataSource) {
        _dataSource = [NSMutableArray array];
    }
    return _dataSource;
}
- (void)viewDidLoad {
    [super viewDidLoad];
    [self initUI];
}
- (void)initUI{
    AFHTTPSessionManager *session = [AFHTTPSessionManager manager];
    NSString *url = @"https://alpha-api.app.net/stream/0/posts/stream/global";
//    @"http://pop.client.chuanke.com/?mod=recommend&act=mobile&client=2&limit=20"
    [session GET:url parameters:@"" progress:^(NSProgress * _Nonnull downloadProgress) {
       
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
         NSLog(@"成功%@",responseObject);
        MainModel *mainModel = [MainModel mj_objectWithKeyValues:responseObject];
        for (dataModel *dataModel in mainModel.data) {
            for (linkModel *model in dataModel.entities.links) {
                
                [self.dataSource addObject:model.len];
            }
            
        }
        NSLog(@"数据为：%@",self.dataSource);
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        NSLog(@"失败%@",error);
    }];
}

@end
