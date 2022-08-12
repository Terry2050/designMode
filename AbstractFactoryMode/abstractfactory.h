#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H
#include <iostream>
#include "color.h"
#include "shape.h"
using namespace std;
class AbstractFactory
{
public:
    virtual Color* getColor(string type)=0;
    virtual Shape* getShape(string type)=0;
};

#endif // ABSTRACTFACTORY_H
