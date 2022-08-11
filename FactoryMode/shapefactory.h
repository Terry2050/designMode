#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include "circle.h"
#include "rectangle.h"

using namespace std;
class ShapeFactory
{
public:
    ShapeFactory();
    Shape* getShape(string type);
};

#endif // SHAPEFACTORY_H
