#ifndef Global_h
#define Global_h

#include "Log.h"
#include "Mutex.h"

extern Log *__LOG;
extern int __ThreadSharedVariable;
extern Mutex __Mutex;

#define MAIN_LOG_BIT            0x00000001
#define THREAD_LOG_BIT          0x00000002

#define OK                       1
#define FAIL					-1
#define LUA_INIT_FAILED         -2
#define LUA_SET_PATH_FAILED     -3
#define LUA_DO_FILE_FAILED      -4

#endif /* Global_h */
