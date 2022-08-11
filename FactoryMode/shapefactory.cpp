#include "shapefactory.h"

ShapeFactory::ShapeFactory()
{

}

Shape* ShapeFactory::getShape(string type)
{
    if (type == "circle"){
        return new Circle();
    }else if (type == "rectangle") {
        return new Rectangle();
    }else{
        return nullptr;
    }
}
