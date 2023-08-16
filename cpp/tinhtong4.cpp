#include <iostream>
using namespace std;
  int main()
  {
     // nhap chuong trinh tinh theo bai 4 cua trang studocu.com by Kine1606
    double s(0);
    double i(2);
    int n;
    cout<< "nhap n chan = ";
    do
    {
        cin>> n;
    } while (n%2 !=0);
    while (i<=n)
    {
        s=s+ 1/i;
        i+=2;
    }
    
    cout<< "s="<< s;
  }