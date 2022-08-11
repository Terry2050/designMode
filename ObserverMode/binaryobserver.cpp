#include "binaryobserver.h"



BinaryObserver::BinaryObserver(Subject sb)
{
    this->sub = sb;
}

BinaryObserver::~BinaryObserver()
{

}

void BinaryObserver::update(int state)
{
    qDebug() << "update from binary" << QString::number(state);
}
