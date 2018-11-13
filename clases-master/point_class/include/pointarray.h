#ifndef POINTARRAY_H
#define POINTARRAY_H
#include <point.h>


class pointarray
{
    public:
        pointarray();
        pointarray(const point pts[], const int size);
        pointarray(pointarray &o);
        void print();
        ~pointarray();
        void resize(int);
        void push_back(const point &p);
        void insert(const point &q , int);

        int geta();

   private:

       int size;
       point *points;
};

#endif // POINTARRAY_H
