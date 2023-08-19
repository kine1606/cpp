#include <iostream>
#include <cmath>
using namespace std;
int main()
{  // nhap chuong trinh tinh theo bai 12 cua trang studocu.com by Kine1606
    long S(0);
    int x;
    int n;
    cout<< "nhap so x=";
    cin>> x;
    cout<< "nhap so n=";
    cin>> n;
    int const index = n;
    for (int i = 0; i< index ; i++) 
    {
        S=S+ pow(x,n);
        n--;
    }
    cout<< "S="<< S; 
}