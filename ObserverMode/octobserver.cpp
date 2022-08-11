#include "octobserver.h"


OctObserver::OctObserver(Subject sub)
{
    subject = sub;
}

OctObserver::~OctObserver()
{

}

void OctObserver::update(int state)
{
    qDebug() << "oct object update:" << QString::number(state);
}
