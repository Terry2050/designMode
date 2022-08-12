#ifndef CIRCLE_H
#define CIRCLE_H
#include <QDebug>
#include "shape.h"

class Circle:public Shape
{
public:
    Circle();
    void draw();
};

#endif // CIRCLE_H
