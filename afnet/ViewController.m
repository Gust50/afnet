//
//  ViewController.m
//  afnet
//
//  Created by kobe on 16/12/28.
//  Copyright © 2016年 Gust50. All rights reserved.
//

#import "ViewController.h"
#import <AFNetworking.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self initUI];
}
- (void)initUI{
    AFHTTPSessionManager *session = [AFHTTPSessionManager manager];
    NSString *url = @"https://alpha-api.app.net/stream/0/posts/stream/global";
    
    [session GET:url parameters:@"" progress:^(NSProgress * _Nonnull downloadProgress) {
       
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
         NSLog(@"成功%@",responseObject);
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        NSLog(@"失败%@",error);
    }];
}
@end
