#ifndef Mutex_hpp
#define Mutex_hpp

#ifndef _WIN32  // Linux, MacOS
#include <pthread.h>
#else //Windows
#include <windows.h>
#endif

class Mutex
{
public:
    Mutex();
    ~Mutex(){}
    bool Create();
    void Destroy();
    void Lock();
    void UnLock();
    bool IsCreated();
private:
    bool _Created;
#ifndef _WIN32
    pthread_mutex_t MyMutex;
#else
    HANDLE MyMutex;
#endif
};

#endif /* Mutex_h */
