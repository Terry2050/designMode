#include "factoryproduct.h"

AbstractFactory* FactoryProduct::getFactory(string choice)
{
    if (choice == "shape"){
        return new ShapeFactory();
    }else{
        return new ColorFactory();
    }
}
