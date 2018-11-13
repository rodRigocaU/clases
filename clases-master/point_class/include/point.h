#ifndef POINT_H
#define POINT_H


class point
{
    public:
        point();
        point(int,int);
        point(point &o);

        void offset(int,int);
        void print();
        double getx();
        double gety();
        void setX(double x);
        void setY(double y);
    private:
        double x, y;
};

#endif // POINT_H
