/*************************************************************************
	> File Name: version.h
	> Author: answer
	> Mail: yuanweijie1993@gmail.com
	> Created Time: 2021年12月25日 星期六 12时50分18秒
 ************************************************************************/

#ifndef __VERSION__H
#define __VERSION__H

#ifdef __cplusplus
extern "C" {
#endif

#include "string.h"

#define MAJOR  	   (0)
#define MINOR      (0)
#define REVISION   (1)

#define VERSION_NUM  (((MAJOR)%100)*10000 + ((MINOR)%100)*100 + ((REVISION)%100))
#define VERSION_STRING TOSTRING(MAJOR) "." TOSTRING(MINOR) "." TOSTRING(REVISION)
#define VERSION_TEXT "EXCHANGE V" VERSION_STRING " " __DATE__ " " __TIME__

#ifdef __cplusplus
}
#endif

#endif
