#include <QCoreApplication>
#include "subject.h"
#include "binaryobserver.h"
#include "octobserver.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Subject subject;
    BinaryObserver* bo = new BinaryObserver(subject);
    OctObserver* oo = new OctObserver(subject);
    subject.attach(bo);
    subject.attach(oo);

    subject.setState(10);


    return a.exec();
}
