/*************************************************************************
	> File Name: type.h
	> Author: answer
	> Mail: yuanweijie1993@gmail.com
	> Created Time: 2021年12月25日 星期六 12时37分26秒
 ************************************************************************/

#ifndef __TYPE__H
#define __TYPE__H

#ifdef __cplusplus
extern "C" {
#endif

typedef char                  S8;
typedef unsigned char         U8;
typedef short                 S16;
typedef unsigned short        U16;
typedef int                   S32;
typedef unsigned int          U32;
typedef long long int         S64;
typedef unsigned long long    U64;
typedef void                  VOID;
typedef float                 F32;
typedef double                F64;
typedef char                  CHAR;
typedef unsigned char         BOLL;
typedef long        	  	  LONG;
typedef unsigned long         ULONG;

#ifndef NULL
	#ifdef __cplusplus
		#define NULL		(0)
	#else
		#define NULL		((void *)0)
	#endif
#endif

#define TRUE      (1)
#define FALSE     (0)

#ifdef __cplusplus
}
#endif

#endif
