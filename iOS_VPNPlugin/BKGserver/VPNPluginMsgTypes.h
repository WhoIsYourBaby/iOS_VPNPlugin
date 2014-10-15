//
//  Header.h
//  BKGserver
//
//  Created by HalloWorld on 14-10-13.
//  Copyright (c) 2014年 HalloWorld. All rights reserved.
//

#ifndef BKGserver_Header_h
#define BKGserver_Header_h

enum {
    AppleVPN_MessageType_Invalid = 0,
    AppleVPN_MessageType_Syn,
    AppleVPN_MessageType_Ack,
    AppleVPN_MessageType_CreateFile,
    AppleVPN_MessageType_CreateFileDone,
    AppleVPN_MessageType_Option,
    AppleVPN_MessageType_OpenVPN_Log,
};

typedef int32_t AppleVPN_MessageType;

#endif
