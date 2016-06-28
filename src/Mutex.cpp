#include "Mutex.h"

Mutex::Mutex()
{
    _Created = false;
}

bool Mutex::Create()
{
    bool Ret = false;
    
#ifndef _WIN32
    if(pthread_mutex_init(&MyMutex, NULL) != 0)
        Ret = false;
    _Created = true;
    
    Ret = true;
#else
    MyMutex = CreateMutex(NULL, FALSE, NULL);
    if(MyMutex == NULL)
        Ret = false;
    _Created = true;
    
    Ret = true;
#endif
    
    return Ret;
}

void Mutex::Destroy()
{
#ifndef _WIN32
    pthread_mutex_destroy(&MyMutex);
    _Created = false;
#else
    CloseHandle(MyMutex);
    MyMutex = NULL;
    _Created = false;
#endif
}

void Mutex::Lock()
{
#ifndef _WIN32
    pthread_mutex_lock(&MyMutex);
#else
    int Result = WaitForSingleObject(MyMutex, INFINITE);
#endif
}

void Mutex::UnLock()
{
#ifndef _WIN32
    pthread_mutex_unlock(&MyMutex);
#else
    ReleaseMutex(MyMutex);
#endif
}

bool Mutex::IsCreated()
{
    return _Created;
}