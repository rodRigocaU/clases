#include "Vector.h"
#include <point.h>

Vector::Vector()
{

}

Vector::Vector(Vector &o)
{
    start = o.start;
    endv = o.endv;
}
