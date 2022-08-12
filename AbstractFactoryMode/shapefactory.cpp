#include "shapefactory.h"

ShapeFactory::ShapeFactory()
{
    qDebug() << "shape factory create";
}

Color *ShapeFactory::getColor(string type)
{
    return nullptr;
}

Shape *ShapeFactory::getShape(string type)
{
    if (type == "circle") {
        return new Circle();
    }else{
        return new Rectangle();
    }
}
