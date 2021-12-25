/*************************************************************************
	> File Name: string.h
	> Author: answer
	> Mail: yuanweijie1993@gmail.com
	> Created Time: 2021年12月25日 星期六 13时06分06秒
 ************************************************************************/

#ifndef __STRING__H
#define __STRING__H

#ifdef __cplusplus
extern "C" {
#endif

#define STRINGIFY(x) (#x)
#define TOSTRING(x) STRINGIFY(x)

#ifdef __cplusplus
}
#endif

#endif
