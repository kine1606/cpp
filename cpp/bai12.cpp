#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long S(0);
    int x;
    int n;
    cout<< "nhap so x=";
    cin>> x;
    cout<< "nhap so n=";
    cin>> n;
    int *ptr;
    ptr=&n;
    for (size_t i = 0; i <= *ptr; i++)
    {
        S=S+ pow(x,n);
        n--;
    }
    cout<< "S="<< S;
}