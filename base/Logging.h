
#ifndef MUDUO_BASE_LOGGING_H
#define MUDUO_BASE_LOGGING_H

#include <stdio.h>


#define LOG_DBG(...) \
	do \
	{ \
	    fprintf(stderr,"%s(%s:%d)", __FILE__,__func__,__LINE__); \
		fprintf(stderr, __VA_ARGS__); \
		fprintf(stderr, "\n"); \
	} \
	while(0);
#define LOG_PRI(...) \
	do \
	{ \
	    fprintf(stderr,"%s(%s:%d)", __FILE__,__func__,__LINE__); \
		fprintf(stderr, __VA_ARGS__); \
		fprintf(stderr, "\n"); \
	} \
	while(0);
#define LOG_WARN(...) \
	do \
	{ \
	    fprintf(stderr,"%s(%s:%d)", __FILE__,__func__,__LINE__); \
		fprintf(stderr, __VA_ARGS__); \
		fprintf(stderr, "\n"); \
	} \
	while(0);
#define LOG_ERR(...) \
	do \
	{ \
	    fprintf(stderr,"%s(%s:%d)", __FILE__,__func__,__LINE__); \
		fprintf(stderr, __VA_ARGS__); \
		fprintf(stderr, "\n"); \
	} \
	while(0);	

#endif