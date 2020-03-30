/******************************************************************************
 *
 *       Filename:  proc_cmd.c
 *
 *    Description:  处理json命令
 *
 *        Version:  1.0
 *        Created:  2020年03月29日 23时01分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  yangkun (yk)
 *          Email:  xyyangkun@163.com
 *        Company:  yangkun.com
 *
 *****************************************************************************/
#include <stdio.h>
#include <libwebsockets.h>
#include <string.h>

// https://medium.com/@martin.sikora/libwebsockets-simple-websocket-server-68195343d64b
char buffer[LWS_PRE + 1024];
int proc_cmd(struct lws *wsi, char *buf, int len)
{
	
	// 处理消息
	printf("yk debug recv:%s\n", buf);

	int *str = "back message\n";
	strcpy(buffer+LWS_PRE, str); 

	// 返回消息
	int ret = lws_write(wsi, buffer+LWS_PRE, strlen(str), LWS_WRITE_TEXT);
	if (ret != 0)
	{
		printf("error to write\n");
	}

}
