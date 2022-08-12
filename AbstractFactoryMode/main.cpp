#include <QCoreApplication>
#include "factoryproduct.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    AbstractFactory *shape = FactoryProduct::getFactory("shape");
    shape->getShape("circle")->draw();
    shape->getShape("rectangle")->draw();
    AbstractFactory *color = FactoryProduct::getFactory("color");
    color->getColor("red")->fill();
    color->getColor("blue")->fill();
    return a.exec();
}
