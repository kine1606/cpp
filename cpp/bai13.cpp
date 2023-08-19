#include <iostream>
#include <cmath>
using namespace std;
int main()
{  // nhap chuong trinh tinh theo bai 13 cua trang studocu.com by Kine1606
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
        S=S+ pow(x,2*n);
        n--;
    }
    cout<< "S="<< S;
}