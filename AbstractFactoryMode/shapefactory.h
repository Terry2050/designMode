#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H
#include <QDebug>
#include "rectangle.h"
#include "circle.h"
#include "abstractfactory.h"
using namespace std;
class ShapeFactory:public AbstractFactory
{
public:
    ShapeFactory();

    Color *getColor(string type);
    Shape *getShape(string type);
};

#endif // SHAPEFACTORY_H
