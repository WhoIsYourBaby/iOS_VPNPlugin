//
//  ViewController.h
//  BKGserver
//
//  Created by HalloWorld on 14-10-10.
//  Copyright (c) 2014年 HalloWorld. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AsyncSocket.h"

@interface ViewController : UIViewController <AsyncSocketDelegate>
{
    NSMutableArray *socksArr;
}


@end

