#ifndef COLORFACTORY_H
#define COLORFACTORY_H
#include <QDebug>
#include "blue.h"
#include "red.h"
#include "abstractfactory.h"
using namespace std;
class ColorFactory:public AbstractFactory
{
public:
    ColorFactory();
    Color *getColor(string type);
    Shape *getShape(string type);
};

#endif // COLORFACTORY_H
