#ifndef FACTORYPRODUCT_H
#define FACTORYPRODUCT_H
#include <QDebug>
#include "colorfactory.h"
#include "shapefactory.h"

class FactoryProduct
{
public:
    static AbstractFactory* getFactory(string choice);
};

#endif // FACTORYPRODUCT_H
