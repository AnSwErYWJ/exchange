/*************************************************************************
	> File Name: sys.h
	> Author: answer
	> Mail: yuanweijie1993@gmail.com
	> Created Time: 2021年12月25日 星期六 12时54分17秒
 ************************************************************************/

#ifndef __SYS__H
#define __SYS__H

#ifdef __cplusplus
extern "C" {
#endif

#if (!(defined API_CALL) || !(defined API_IMPORT_OR_EXPORT))
	#if defined _WIN32
		#if defined _WIN64
			#define API_CALL __stdcall
		#else
			#define API_CALL
		#endif
		#define API_IMPORT_OR_EXPORT __declspec(dllexport)
	#elif defined __ANDROID__
		#define API_CALL
		#define API_IMPORT_OR_EXPORT __attribute ((visibility("default")))
	#elif defined __APPLE__
		#define API_CALL
		#define API_IMPORT_OR_EXPORT
	#elif defined __unix__
		#define API_CALL
		#define API_IMPORT_OR_EXPORT __attribute ((visibility("default")))
	#else
		#define API_CALL
		#define API_IMPORT_OR_EXPORT
	#endif
#endif

#ifdef _WIN32
#define likely(x)   	(x)
#define unlikely(x) 	(x)
#else
#define likely(x)   	__builtin_expect(!!(x), 1)
#define unlikely(x) 	__builtin_expect(!!(x), 0)
#endif

#ifdef __cplusplus
}
#endif

#endif
