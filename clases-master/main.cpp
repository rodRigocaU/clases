#include <iostream>
#include <math.h>
using namespace std;
class punto{
public:
    int x , y;

};
class vector2{
public:
    punto inicio, fin;

};
void im(vector2 *ptr)
{
    cout << "( " << ptr->inicio.x << " ," << ptr->inicio.y << " )" << " " << "( " << ptr->fin.x << " ," << ptr->fin.y << " )" << '\n';
}
float mowd(const vector2 *v)
{
    float e =  v->fin.x - v->inicio.x;
    float f  = v->fin.y - v->inicio.y;
    return sqrt((e*e) + (f*f));

}
void cal(vector2 arr[])
{
    int n = 4;
    for(int z = 0; z < (n); z++)
    {
        cout << mowd(&arr[z]) << '\n';
    }
}
int main()
{
    vector2 v;
    v.inicio.x = 1;
    v.inicio.y =2 ;
    v.fin.x = 3;
    v.fin.y = 4;
   /* cout << v.inicio.x << '\n';
    cout << mowd(v) << '\n';*/
    vector2 arr[4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    cout << mowd(&arr[0]) << '\n' ;
    cout << mowd(&arr[1]) << '\n' ;
    cout << mowd(&arr[2]) << '\n' ;
    cout << mowd(&arr[3]) << '\n' ;
    cal(arr);
    im(&v);
    return 0;
}
