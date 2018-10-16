#include <iostream>
#include <string>
using namespace std;
struct lap{
    int sueldo;
    string frase;

} italo;

bool des(int j, int i)
{
    return j < i;
}
bool asc(int j, int i)
{
    return j > i;
}
void swapt(int &x , int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void ptr (int x[] , int n, bool(*pt)(int, int))
{
    for(int y  = 0; y < n; y++)
    {
        for(int z = y ; z < n ; z++)
        {
            if((*pt)(x[y], x[z]))
            {
                swapt(x[y], x[z]);
            }
        }
    }
}

void print (int cad[], int n)
{
    for(int x = 0; x < n; x++)
    {
        cout << cad[x] << '\t';
    }


}
int *functionq(){
    int *ptr = new int;
    *ptr = 5;
    return ptr;

}
int main()
{

    /*int cad [] = {12,3,6,2,1,9};
    int n = sizeof(cad) / sizeof(cad[0]);
    ptr(cad, n , asc);
    print(cad,n);*/
    int *ptr = functionq();
    cout << *ptr << '\n';
    delete ptr;

    return 0;
}
