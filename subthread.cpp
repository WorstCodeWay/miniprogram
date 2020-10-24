#include "subthread.h"

#include <iostream>

SubThread::SubThread()
{

}
// protected member
void SubThread::run()
{
  qInfo("Thread running...");
  while(true)
  {
    usleep(300000);  // 300ms
    std::cout << "." << std::flush;
  }
  qInfo("Thread exists...");
}
