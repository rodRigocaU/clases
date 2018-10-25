#include "pointarray.h"
#include <point.h>

pointarray::pointarray()
{
    this->size = 0;
    this->points = new point[size];
}


pointarray::pointarray(const point pts[], const int size)
{
    this->size = size;
    this->points = new point[size];
    for(int i = 0; i < size; i++)
    {
        points[i] = pts[i];
    }
}
pointarray::~pointarray()
{
    delete[] points;
}

pointarray::pointarray(pointarray &o)
{
    this->size = o.size;
    this->points = new point[o.size];
    for(int i = 0; i < o.size; i++)
    {
        this->points[i] = o.points[i];
    }
}

int pointarray::geta()
{
    return size;
}
