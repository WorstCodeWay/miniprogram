#ifndef SUBTHREAD_H
#define SUBTHREAD_H

#include <QThread>

class SubThread : public QThread
{
public:
  SubThread();

protected:
  void run() override;
};

#endif // SUBTHREAD_H
