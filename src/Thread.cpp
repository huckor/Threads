#include "Thread.h"
#include "Log.h"
#include "Global.h"
#include "Conv.h"
#include <string>
#include <stdlib.h>

//This structure will be pass as argument to thread function
struct ThreadStruct {
    std::string Text;

	ThreadStruct() : Text("") {}
};

typedef ThreadStruct _ThreadStruct;

//This function will be executed in thread
static void THREAD_CC ThreadProcess(void *Arg)
{
    int Tmp = 0;
    
    LOG("Thread started", THREAD_LOG_BIT);
    
    ThreadStruct *Param = (ThreadStruct *)Arg;
    
#ifndef _WIN32
    pthread_detach(pthread_self());
#endif
    
    LOG("Thread got using param struct this: " + Param->Text, THREAD_LOG_BIT);
    
    while(true)
    {
        __Mutex.Lock();
        Tmp = __ThreadSharedVariable;
        __Mutex.UnLock();
        
        if(Tmp > 0)
            break;
        else

		SLEEP(1);
    }
    
    LOG("Thread got using shared variable this: " + Conv::IntToStr(Tmp), THREAD_LOG_BIT);
    
    //Dealocate struct !important
    delete Param;
    
    LOG("Thread ends", THREAD_LOG_BIT);
    
    return;
}

//This function will create new thread and pass him thread structure as argument
int Thread::Create()
{
    ThreadStruct *Params;
    THREAD_TYPE Tid;
    
    //Alocate memory for param struct, will be dealocated in thread
    Params = new _ThreadStruct();
    Params->Text = "test";
    
    LOG("Creating new thread", THREAD_LOG_BIT);
    
#ifndef _WIN32
    pthread_create(&Tid, NULL, (void* (*)(void*))&ThreadProcess, Params);
#else
    HANDLE Thread = CreateThread(NULL, 0, (unsigned long (__stdcall *)(void *))ThreadProcess, (void *)(Params), 0, &Tid);
    CloseHandle(Thread); 
#endif
    
    return OK;
}