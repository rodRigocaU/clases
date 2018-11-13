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


void pointarray::resize(int newSize)
{
    point *pts = new point[newSize];
    int minsize = (newSize > size) ? size : newSize;
    for(int i = 0; i < minsize; i++)
    {
        pts[i] = points[i];
    }
    delete[] points ;
    size = newSize;
    points  = pts;
}

void pointarray::push_back(const point &p)
{
    resize(size + 1);
    points[size - 1] = p;
}

void pointarray::insert(const point &q, int pos)
{
    resize(size + 1);
    point temp ;
    point temp2;
    for(int x = size - 1; x > pos ;  x--)
    {
        temp = points[x];
        points[x] = points[x - 1];
        points[x - 1] = temp;
    }
    points[pos] = q;

}
void pointarray::print()
{
    for(int x = 0;x < size; x++)
    {
        points[x].print();
    }
}
