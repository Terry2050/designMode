#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <QDebug>
#include "shape.h"

class Rectangle:public Shape
{
public:
    Rectangle();
    void draw();
};

#endif // RECTANGLE_H
