#ifndef BINARYOBSERVER_H
#define BINARYOBSERVER_H
#include <QDebug>
#include "observer.h"
#include "subject.h"
class BinaryObserver : public Observer
{
public:
    BinaryObserver(Subject sb);
    ~BinaryObserver();
    void update(int state);
private:
    Subject sub;

};

#endif // BINARYOBSERVER_H
