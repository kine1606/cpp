#include <iostream>
#include <cmath>
using namespace std;
int main()
{  // nhap chuong trinh tinh theo bai 14 cua trang studocu.com by Kine1606
    long S(0);
    int x;
    int n;
    cout<< "nhap so x=";
    cin>> x;
    cout<< "nhap so n=";
    cin>> n;
    int const index =n;
    for (size_t i = 0; i < index; i++)
    {
        S=S+ pow(x,(2*n)+1);
        n--;
    }
    cout<< "S="<< S;
}