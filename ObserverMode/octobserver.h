#ifndef OCTOBSERVER_H
#define OCTOBSERVER_H
#include <QDebug>
#include "subject.h"
#include "observer.h"
class OctObserver:public Observer
{
public:
    OctObserver(Subject sub);
    ~OctObserver();
    void update(int state);

private:
    Subject subject;
};

#endif // OCTOBSERVER_H
