#include <iostream>
#include <Vector.h>
#include <pointarray.h>
#include<point.h>


using namespace std;

int main()
{
    point arr[4];
    pointarray(arr, 4);
    arr[0].setX(4);
    arr[0].setY(6);
    arr[0].print();
    point u(1,2);
    point y(5,6);
    point w(7,8);
    point ar[] = {u,w,y};

    int size = sizeof(ar)/sizeof(arr[0]);
    pointarray pa(ar, size);
    cout << pa.geta() << '\n';

    pointarray p2 = pa;
    cout << p2.geta() << '\n';
    return 0;
}
