#ifndef VECTOR_H
#define VECTOR_H
#include <point.h>


class Vector
{
    public:
        Vector();
        Vector(Vector &o);
    private:
        point start , endv;
};

#endif // VECTOR_H
