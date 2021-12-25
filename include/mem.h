/*************************************************************************
	> File Name: mem.h
	> Author: answer
	> Mail: yuanweijie1993@gmail.com
	> Created Time: 2021年12月25日 星期六 13时14分30秒
 ************************************************************************/

#ifndef __MEM__H
#define __MEM__H

#ifdef __cplusplus
extern "C" {
#endif

#include "log.h"

#ifndef MALLOC
#define MALLOC malloc
#endif

#ifndef CALLOC
#define CALLOC calloc
#endif

#ifndef REALLOC
#define REALLOC realloc
#endif

#ifndef FREE
#define FREE free
#endif

#ifdef __cplusplus
}
#endif

#endif
