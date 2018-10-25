#ifndef POINTARRAY_H
#define POINTARRAY_H
#include <point.h>


class pointarray
{
    public:
        pointarray();
        pointarray(const point pts[], const int size);
        pointarray(pointarray &o);

        ~pointarray();

        int geta();

   private:

       int size;
       point *points;
};

#endif // POINTARRAY_H
