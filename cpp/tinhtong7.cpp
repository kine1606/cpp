#include <iostream>
using namespace std;
  int main()
  {
     // nhap chuong trinh tinh theo bai 7 cua trang studocu.com by Kine1606
     double s(0);
     double i(1);
     int n;
      cout<< "nhap n = ";
      cin>> n;

          while (i<=n)
        {
           s=s+ i/(i+1);
           i++;
        }
    cout<< "s="<< s;
  }