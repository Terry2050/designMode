#include "colorfactory.h"

ColorFactory::ColorFactory()
{
    qDebug() << "color factory create";
}

Color *ColorFactory::getColor(string type)
{
    if (type == "red"){        
        return new Red();
    }else{
        return new Blue();
    }
}

Shape *ColorFactory::getShape(string type)
{
    return nullptr;
}




