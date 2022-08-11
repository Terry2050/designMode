#include <QCoreApplication>
#include "shapefactory.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ShapeFactory factory;
    factory.getShape("circle")->draw();
    factory.getShape("rectangle")->draw();

    return a.exec();
}
