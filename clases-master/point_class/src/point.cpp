#include "point.h"
#include <iostream>

using namespace std;

point::point()
{
    x = 0;
    y = 0;
}
point::point(int a, int b)
{
    x = a;
    y = b;
}
point :: point( point &o){

    x = o.x;
    y = o.y;


}
void point::offset(int nx, int ny)
{
    x += nx;
    y += ny;
}

double point::getx(){

    return x;
}


double point::gety(){

    return y;

}

void point::setX(double x){

this -> x = x;
}
void point::setY(double y){

this -> y  = y;

}

void point::print(){

    cout << x << "->" << y << '\n';
}

