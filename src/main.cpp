#include "Log.h"
#include "Global.h"
#include "Thread.h"
#include "Mutex.h"

Log *__LOG;
int __ThreadSharedVariable;
Mutex __Mutex;

int main(int argc, const char * argv[])
{
    __LOG = new Log();
    __LOG->Create("stderr");
    
    __ThreadSharedVariable = -1;
    __Mutex.Create();
    Thread::Create();
    
    //After 2sec. we will update our shared variable
	SLEEP(2);

    __Mutex.Lock();
    __ThreadSharedVariable = 200;
    __Mutex.UnLock();
    
    //Sleep for 10 seconds, just to wait for thread stuff
    SLEEP(10);
	LOG("Main ends", MAIN_LOG_BIT);
    
    __Mutex.Destroy();
    delete __LOG;
    
    return 0;
}
