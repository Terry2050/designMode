#ifndef SUBJECT_H
#define SUBJECT_H

#include <QVector>
#include "observer.h"
class Subject
{
public:
    Subject();
    void attach(Observer* observer);
    int getState();
    void setState(int state);
 private:
    QVector<Observer*> observerList;
    int state;
};

#endif // SUBJECT_H
